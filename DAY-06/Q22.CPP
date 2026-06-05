#include <bits/stdc++.h>
using namespace std;
int main(){
       int n,d,sum=-1,sumn=0;   
       cout<<"enter number : ";
       cin>>n;
       int x=n;
       while(x>0){
          d=x%10;
          sum = sum + 1;
          sumn = sumn + d*pow(2,sum);
          x=x/10;
       }
       cout<<sumn;
    return 0;
}