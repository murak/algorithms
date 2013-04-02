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

