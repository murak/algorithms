/* Author: Murali K
 * email: muralik.msr@gmail.com
 * Date: 2 Apr 2013
 */

#include<stdio.h>

int phy,P,n,e,d,C;

void encrypt() {
    int i;
    C = 1;
    for(i=0;i< e;i++)
        C=C*P%n;
    C = C%n;
    printf("\n\tAfter Encryption. Cipher Text : %d\n\n",C);
}

void decrypt() {
    int i;
    P = 1;
    for(i=0;i< d;i++)
        P=P*C%n;
    P = P%n;
    printf("\n\tAfter Decrption. Plain Text : %d\n\n",P);
}

void main() {
    int p,q,s;
    char ch= '3';
    printf("Enter Two Relatively Prime Numbers\t: ");
    scanf("%d%d",&p,&q);
    n = p*q;
    phy=(p-1)*(q-1);
    printf("\nphy(n)\t= %d",phy);

    printf("\nEnter value of e\t: ");
    scanf("%d",&e);

    d = 1;
    do
    {
        s = (d*e)%phy;
        d++;
    } while(s!=1);
    d = d-1;

    printf("\n\tPublic Key\t: {%d,%d}",e,n);
    printf("\n\tPrivate Key\t: {%d,%d}",d,n);
    
    printf("\n\nPress\n1. Encrypting \n2. Decrypting\t");
    scanf("%c%c",&ch,&ch);
    switch(ch) {
        case '1': 
                printf("\n\nEnter The Plain Text\t: ");
                scanf("%d",&P);
                encrypt();
                break;
        case '2': 
                printf("\n\nEnter the Cipher text\t: ");
                scanf("%d",&C);
                decrypt();
                break;
        default: 
                printf("\nInvalid Option!!\n");
                    
    }

}
