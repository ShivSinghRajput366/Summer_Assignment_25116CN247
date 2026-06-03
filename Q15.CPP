#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int d,sum=0;
    int x=n;
    while(x>0){
        d=x%10;
        sum = sum+ d*d*d;
        x=x/10;
    } if(sum == n){
        cout<<"its armstrong number";
    }else{cout<<"not armstrong"; }
     
}