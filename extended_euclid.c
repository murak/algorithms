#include "extended_euclid.h"

int main(int argc, char ** argv) {
    
    if(argc<3) {
        printf("\nUsage: %s <num1 <num2>\n", argv[0]);
        return 0;
    }   
    struct result r = extended_gcd(atoi(argv[1]), atoi(argv[2]));
    printf("\nvalues are \ngcd = %d \nx = %d \ny = %d\n\n",r.g, r.x, r.y);
    return 0;
}

