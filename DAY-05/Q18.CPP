#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int d,sum=0;
    int x = n;
    while(x>0){
        int f=1;
        d=x%10;
     for(int i=1; i<=d; i++){
        f=f*i;
     } sum = sum+f;
     x=x/10;
    }
        if(sum==n){
            cout<<"strong number";
        }else{ cout<<"not strong"; }
    
}