#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,test;
    cout<<"enter number : ";
    cin>>n;
    for(int i=2; i<=n; i++){
        test = 1;
        for(int j=2; j<=i/2; j++){
           if(i%j==0){
            test = 0; break;
           }
        } if(test == 1){cout<<i<<" ";}
    
    }
    
return 0;
}