/* Author: Murali K
 * email: muralik.msr@gmail.com
 * Date: 2 Apr 2013
 */
#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char** argv){
    int num,j,k;
    if(argc<2) {
        cout<<"\nUsage: "<<argv[0]<<" <num>"<<endl;
        return 0;
    }
    num = atoi(argv[1]);
    for(int i=1; i<=num; i++){
        k=0;
        if(num%i==0){
            j=1;
            while(j<=i){
                if(i%j==0)
                k++;
                j++;
            }
            if(k==2)
                cout<<i<<"\t";
        }
    }
    cout<<endl<<endl;
    return 0;
}
