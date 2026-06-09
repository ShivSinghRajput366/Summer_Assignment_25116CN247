#include <bits/stdc++.h>
using namespace std;
main(){
int n;
    cout<<"enter number : ";
    cin>>n;
    for(int i=1; i<=n; i++ ){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        } char sum = 'A';
        for(int j=1; j<=i; j++){     
            cout<<sum;
             sum = sum + 1;
        } 
         for(char j=sum-1; j>='A'; j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0; }