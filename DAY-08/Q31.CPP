#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    for(int i=1; i<=n; i++ ){
        char sum='A';
        for(int j=1; j<=i; j++){    
            cout<<sum<<" ";
            sum=sum+1;
        } cout<<"\n";
    }
    return 0;
}