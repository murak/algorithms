/* Author: Murali K
 * email: muralik.msr@gmail.com
 * Date: 2 Apr 2013
 */
#include<stdio.h>
#include<string.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(int argc, char **argv) {
    if(argc < 3) {
        printf("\nUsage: %s <num1> <num2> \n",argv[0]);
        return 0;
    }
    printf("\ngcd of %s and %s is = %d\n",
            argv[1], argv[2], gcd(atoi(argv[1]), atoi(argv[2])));
    return 0;
}
