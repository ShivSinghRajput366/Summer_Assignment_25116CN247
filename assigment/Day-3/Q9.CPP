#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,test;
    cout<<"enter number : ";
    cin>>n;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
           test = 0;
           break;
        } }
    if(test == 0){ cout<< "not prime number";}else{cout<<"is prime";}
    
return 0;
}