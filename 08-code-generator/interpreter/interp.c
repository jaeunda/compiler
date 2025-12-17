#include "type.h"
extern char *opcode_name[];
extern INSTRUCTION code[];
extern int stack[];

extern	float *stack_f;
extern	char *stack_c;
void 	runtime_error(int,int);
int  	base(int);
void 	interp();
void 	lib_printf();
void 	lib_scanf();
void 	lib_malloc();
void 	dump_stack(),check_operand_zero();
int 	p=0,	// program counter
	b=0,	// base register
	t=-1,	// stack top register
	hp=STACK_MAX; // heap pointer register

void dump_stack()
{
    	int j=0,i=0;
	printf("\n===========stack dump================\n");
	for (i=0;i<=t; i++){
            printf("%08x", i);
	    if (i==b) printf("*"); else printf(" ");
            printf(":  %08x   %d,%f\n", stack[i], stack[i], *(stack_f+i));
	}
	printf("\n=====================================\n");
	
}

void runtime_error(int i,int a)
{
   printf("runtime error at pc %d : ",a);
   switch (i) {
	case 1: printf("devide by zero  \n");break;
	case 2: printf("array out of bound \n");break;
	case 3: printf("stack overflow \n");break;
	case 4: printf("unknown error in switch\n");break;
	case 5: printf("illegal operand\n");break;
	case 100: printf("fatal error: unknown opcode\n");break;
	default: printf("unknown\n");break;
   }
   exit(1);
}

void check_operand_zero(int opr) {
   if (opr) runtime_error(5,p-1); 
}
int base(int l)
{
   if (l==0) 
        return (0);
   else
	return(b);
}

void interp()
{
   INSTRUCTION i;
   int j,k,l,m; 
   stack[0] = 0; stack[1] = 0; stack[2] = 0;

   printf("start execution\n");

   do {
	i=code[p++];
	// dump_stack(); printf("%d : %s, %d, %d\n", p-1, opcode_name[i.f], i.l, i.a);
	switch (i.f) {
		case LOD: 
			t++; stack[t]=stack[base(i.l)+i.a/4]; break;
		case LDI:
			check_operand_zero(i.l); check_operand_zero(i.a);
			stack[t]=stack[stack[t]/4];
			break;
		case LDIB:
			check_operand_zero(i.l); check_operand_zero(i.a);
			stack[t]=*(stack_c+stack[t]);
			break;
		case LDX: t++; 
			check_operand_zero(i.l); check_operand_zero(i.a);
			stack[t]=stack[stack[t-1]/4]; 
			break;
		case LDXB: t++;
			check_operand_zero(i.l); check_operand_zero(i.a);
			stack[t]=*(stack_c+stack[t-1]);
			break;
		case LDA: 
			stack[++t]=base(i.l)*4+i.a; break;
		case LITI:
			check_operand_zero(i.l);
			stack[++t]=i.a; break;
		case STO: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t=t-2;
			stack[stack[t+1]/4]=stack[t+2];
			break;
		case STOB:
			check_operand_zero(i.l); check_operand_zero(i.a);
			t=t-2;
			*(stack_c+stack[t+1])=stack[t+2];
			break;
		case STX: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--;
			stack[stack[t]/4]=stack[t+1];
			stack[t]=stack[t+1];
			break;
		case STXB:
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--;
			*(stack_c+stack[t])=stack[t+1];
			stack[t]=stack[t+1];
			break;
		case OFFSET: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=stack[t]+stack[t+1];break;
		case MOD: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			if (stack[t]==0) 
				runtime_error(1,p-1); 
			else { t--; stack[t]=stack[t]%stack[t+1];}
			break;
		case ADDI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=stack[t]+stack[t+1];break;
		case SUBI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=stack[t]-stack[t+1];break;
		case MULI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=stack[t]*stack[t+1];break;
		case DIVI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			if (stack[t]==0) 
				runtime_error(1,p-1); 
			else { t--; stack[t]=stack[t]/stack[t+1];}
			break;
		case ADDF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; *(stack_f+t)= *(stack_f+t) + *(stack_f+t+1); break;
		case SUBF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; *(stack_f+t)= *(stack_f+t) - *(stack_f+t+1); break;
		case MULF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; *(stack_f+t)= *(stack_f+t) * *(stack_f+t+1); break;
		case DIVF: 
			t--; *(stack_f+t)= *(stack_f+t) / *(stack_f+t+1); break;

		case EQLI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=(stack[t]==stack[t+1])? 1:0;break;
		case NEQI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=(stack[t]!=stack[t+1])? 1:0;break;
		case LSSI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=(stack[t]<stack[t+1])? 1:0;break;
		case GEQI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=(stack[t]>=stack[t+1])? 1:0;break;
		case GTRI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=(stack[t]>stack[t+1])? 1:0;break;
		case LEQI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=(stack[t]<=stack[t+1])? 1:0;break;
		case EQLF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; *(stack_f+t) = (*(stack_f+t) == *(stack_f+t+1))? 1:0;break;
		case NEQF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; *(stack_f+t) = (*(stack_f+t) != *(stack_f+t+1))? 1:0;break;
		case LSSF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; *(stack_f+t) = (*(stack_f+t) <  *(stack_f+t+1))? 1:0;break;
		case GEQF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; *(stack_f+t) = (*(stack_f+t) >= *(stack_f+t+1))? 1:0;break;
		case GTRF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; *(stack_f+t) = (*(stack_f+t) >  *(stack_f+t+1))? 1:0;break;
		case LEQF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; *(stack_f+t) = (*(stack_f+t) <= *(stack_f+t+1))? 1:0;break;
		case AND: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=stack[t]&&stack[t+1];break;
		case OR : 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t--; stack[t]=stack[t]||stack[t+1];break;
		case NOT: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			stack[t]=(stack[t]==0) ? 1: 0; break;
		case CVTI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			stack[t]=(int) (*(stack_f+t)); break;
		case CVTF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			*(stack_f+t)= (float)stack[t]; break;

		case JMP: 
			check_operand_zero(i.l);
			p=i.a; break;
		case JPC:
			check_operand_zero(i.l);
			if (stack[t]==0) p=i.a; t--; break;
		case JPCR:
			check_operand_zero(i.l); 
			if (stack[t]==0) p=i.a; else t--; break;
		case JPT: 
			check_operand_zero(i.l);
			if (stack[t]!=0) p=i.a; t--; break;
		case JPTR:
			check_operand_zero(i.l);
			if (stack[t]!=0) p=i.a; else t--; break;
		case INT: 
			check_operand_zero(i.l);
			t=t+i.a/4; 
			if(t>=20000) 
				runtime_error(3,p-1);
			break;
		case INCI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			stack[t]++; break;
		case INCF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			*(stack_f+t)+=1.0; break;
		case DECI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			stack[t]--; break;
		case DECF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			*(stack_f+t)-=1.0; break;
		case POP: 
			check_operand_zero(i.l);
			t=t-i.a; break;
		case MINUSF: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			*(stack_f+t)=-*(stack_f+t); break;
		case MINUSI: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			stack[t]=-stack[t]; break;
		case RET: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			t=b-1;p=stack[t+3];b=stack[t+2]; break;
		case ADDR:
			check_operand_zero(i.l);
			t++; stack[t]=i.a; break;
		case SUP: 
			stack[t+1]=base(i.l); 
			stack[t+2]=b; 
			stack[t+3]=p; 
			b=t+1; 
			p=i.a;
			break;
		case CAL: 
			check_operand_zero(i.l); check_operand_zero(i.a);
			if (stack[t]>0) {
				stack[t+1]=b; 
				stack[t+2]=p; 
				p=stack[t];
				stack[t]=base(i.l); 
				b=t--;
				break;}
			else switch (-stack[t]) { 	// library functions 
			   case 1: 			// printf
				lib_printf();
				break;
			   case 2: 			// malloc
				lib_malloc();
				break;
			   case 3: 			// scanf
				lib_scanf();
				break;
			   default: printf("library not yet implemented\n");
				break;
			}
			break;
		default: runtime_error(100,p-1);
			break;
 	    	}
   } while (p); 
	
   printf("end execution\n");
   
}
