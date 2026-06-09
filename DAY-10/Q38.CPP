#include <bits/stdc++.h>
using namespace std;
main(){
int n;
    cout<<"enter number : ";
    cin>>n;
    for(int i=0; i<n; i++ ){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*n-2*i-1; j++){
            cout<<"*";
        } cout<<"\n";
    }
    return 0;
}