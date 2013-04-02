#include "power_mod.h"

int main(int argc, char **argv) {
    if(argc<4) {
        printf("\nUsage: %s <b> <p> <n>\n\
                To compute b^p mod n\n", argv[0]);
        return 0;
    }   
    printf("\n%s^%s mod %s = %d\n\n", argv[1], argv[2], 
            argv[3], pow_mod(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
    return 0;
}

