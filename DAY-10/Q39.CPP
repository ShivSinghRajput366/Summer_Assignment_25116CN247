#include <bits/stdc++.h>
using namespace std;
main(){
int n;
    cout<<"enter number : ";
    cin>>n;
    for(int i=1; i<=n; i++ ){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        } int sum = 0;
        for(int j=1; j<=i; j++){
            sum = sum + 1;
            cout<<sum;
        } for(int j=sum; j>1; j--){
            sum=sum-1;
            cout<<sum;
        }
        cout<<"\n";
    }
    return 0; }