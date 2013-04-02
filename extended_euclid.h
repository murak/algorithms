/* Author: Murali K
 * email: muralik.msr@gmail.com
 * Date: 2 Apr 2013
 */


#include <stdio.h>
#include <stdlib.h>

struct result {
    int g;
    int x;
    int y;
};

struct result extended_gcd(int a, int b) {
    if(a==0) {
        struct result r = {b, 0 ,1};
        return r;
    }
    else {
        struct result r = extended_gcd(b%a, a);
        struct result rr = {r.g, r.y-(b/a)*r.x, r.x};
        return rr;
    }
}

