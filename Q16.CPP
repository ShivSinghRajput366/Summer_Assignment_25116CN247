#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int d,sum;
    int x;
        for(int i=1; i<=n; i++){
            sum=0;
            x=i;
            while(x>0){
        d=x%10;
        sum = sum+ d*d*d;
        x=x/10;
            }if(sum == i){
        cout<<i<<" ";
    }
}
}