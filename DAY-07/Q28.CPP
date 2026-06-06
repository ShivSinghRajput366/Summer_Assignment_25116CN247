#include <bits/stdc++.h>
using namespace std;
int countdigit(int i){
    if(i==0){
        return 0;
    }
        i=i/10;
        return countdigit(i)+1;
    }

int fact(int i){
    
   if(i==0){
    return 0;
   } 
   int d;
   d = i%10;
   return d*pow(10, countdigit(i/10)) + fact(i/10);
}
int main(){
       int n;
       cout<<"eneter number : ";
       cin>>n;
       cout<<"reverse is : "<<fact(n);
    return 0;
}