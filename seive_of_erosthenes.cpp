#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    vector<int> num;
    int n, i, j;
    cout<<"\nEnter the number till where you want \
                to find the prime numbers\n";
    cin>>n;

    for(i=0;i<=n;i++) num.push_back(i);
    for(i=2; i<num.size(); i++) {
        if(num[i]) {
            j = i*i;
            for(; j<num.size(); j+=i) {
                num[j] = 0;
            }
        }
    }
    for(i=2;i<num.size(); i++) {
        if(num[i]) cout<<"\t"<<i;
    }
    cout<<endl;
    
    return 0;

}
