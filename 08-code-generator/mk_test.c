#include <stdio.h>
#include <stdlib.h>

int main(void){
    for (int i=1; i<=13; i++){
        char asm_cmd[128];
        char asm_fname[128];
        char interp_fname[128];
        if (i < 10) {
            sprintf(asm_cmd, "./code_generator ./test-src/test0%d.c", i);
            sprintf(asm_fname, "test-asm/test0%d.asm", i);
            sprintf(interp_fname, "test-interp/interp-res0%d", i);
        } else {
            sprintf(asm_cmd, "./code_generator ./test-src/test%d.c", i);
            sprintf(asm_fname, "test-asm/test%d.asm", i);
            sprintf(interp_fname, "test-interp/interp-res%d", i);
        }
        system(asm_cmd);
        rename("./a.asm", asm_fname);

        char interp_cmd[512];
        sprintf(interp_cmd, "./interp %s > %s", asm_fname, interp_fname);
        system(interp_cmd);
    }
    exit(0);
}