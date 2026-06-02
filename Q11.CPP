#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,test,sum=0;
    int k;
    cout<<"enter number : ";
    cin>>n;
    k=n;
    while(n != 0){
        test = n%10;
        sum = sum + test*test*test;
        n = n/10;

    }
    if(sum == k){
        cout<<"number is armstrong";
    }else{cout<<"not armstrong";}
    
return 0;
}