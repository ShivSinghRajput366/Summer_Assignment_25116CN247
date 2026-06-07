#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++ ){
        
        sum=sum+1;
        for(int j=1; j<=i; j++){    
            cout<<sum<<" ";
        } cout<<"\n";
    }
    return 0;
}