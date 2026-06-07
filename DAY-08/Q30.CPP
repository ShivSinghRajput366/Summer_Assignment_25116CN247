#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    for(int i=1; i<=n; i++ ){
        int sum=0;
        for(int j=1; j<=i; j++){
            sum=sum+1;
            cout<<sum<<" ";
        } cout<<"\n";
    }
    return 0;
}