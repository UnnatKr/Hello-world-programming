#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

int main() {
    lln n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }
        else{
            n=3*n +1;
            cout<<n<<" ";
        }
    }
    return 0;
}