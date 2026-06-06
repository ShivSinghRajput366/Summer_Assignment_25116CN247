#include <bits/stdc++.h>
using namespace std;
int fact(int i){ 
   if(i==0){
    return 0;
   } 
   int d;
   d = i%10;
   return d + fact(i/10);
}
int main(){
       int n;
       cout<<"eneter number : ";
       cin>>n;
       cout<<"sum is : "<<fact(n);
    return 0;
}