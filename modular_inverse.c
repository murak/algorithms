#include "modular_inverse.h"

int main(int argc, char ** argv) {
        
    if(argc<3) {
        printf("\nUsage: %s <a> <m>\n", argv[0]);
        return 0;
    }   
    printf("\nInverse of %s mod %s is = %d\n", 
           argv[1], argv[2], modular_inverse(atoi(argv[1]), atoi(argv[2])));
    return 0;
}

