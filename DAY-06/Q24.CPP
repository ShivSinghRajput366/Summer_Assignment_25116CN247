#include <bits/stdc++.h>
using namespace std;
int main(){
       int n,sum=1; 
       int x;  
       cout<<"enter x : ";
       cin>>x;
       cout<<"\n";
       cout<<"enter n : ";
       cin>>n;
       cout<<"\n";
       for(int i = 1; i<=n;i++){
         sum = sum*x;
       }
         cout<<" x^n = "<<sum;
    return 0;
}