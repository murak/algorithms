/* Author: Murali K
 * email: muralik.msr@gmail.com
 * Date: 2 Apr 2013
 */


#include "extended_euclid.h"

int modular_inverse(int a, int m) {
    struct result r = extended_gcd(a, m); 
    if(r.g != 1) {
        printf("\nERROR: No modular inverse!!!\n");
        exit(0);
    }   
    return r.x%m;
}

