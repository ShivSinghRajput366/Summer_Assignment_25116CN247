#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,test,sum=0;
    int k;
    cout<<"enter number : ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        sum =0;
        k=i;
    while(k != 0){
        test = k%10;
        sum = sum + test*test*test;
        k = k/10;
     
    }if(sum == i){
        cout<<i<<" ";
    }
}
    
return 0;
}