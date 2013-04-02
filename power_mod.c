/* Author: Murali K
 * email: muralik.msr@gmail.com
 * Date: 2 Apr 2013
 */
#include<stdio.h>

int pow_mod(int b, int p, int n) {
    
    int result = 1;
    while(p>0) {
        if(p%2) result = (result*b)%n;
        p = p/2;
        b = (b*b)%n;
    }
    return result;
}

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
