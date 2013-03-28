/*  Program to check if a number is prime or not
 *  Author: Murali K
 *  Date: 80 Mar 2013
 */
    
#include<iostream>
#include<cmath>

using namespace std;

int main() {
    
    int n, i, root;
    cout<<"\nEnter the number to check if it is prime\n";
    cin>>n;
    root = sqrt(n);
    for(i=2;i<root; i++) {
        if(n%i == 0) {
            cout<<"\nNot a prime number\n";
            return 0;
        }
    }
    cout<<"\nNUmber is prime\n";

    return 0;
}
