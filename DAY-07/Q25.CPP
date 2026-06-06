
#include <bits/stdc++.h>
using namespace std;
int fact(int i){
   
   if(i==0){
    return 0;
   }
   if(i==1){
    return 1;
   } 
   return i*fact(i-1);
}
int main(){
       int n;
       cout<<"eneter number : ";
       cin>>n;
       cout<<"factorial is : "<<fact(n);
    return 0;
}