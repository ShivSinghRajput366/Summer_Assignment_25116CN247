#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    for(int i=1; i<=n; i++ ){
        cout<<"*";
        for(int j=2; j<n; j++){
            if(i==1||i==n){
            cout<<"*";
         } else if(i==2 || i<=n-1){
            cout<<" ";
         }
        }
         cout<<"*";
          cout<<"\n";
    }
    return 0;
}