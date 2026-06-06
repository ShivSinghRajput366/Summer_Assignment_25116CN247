#include <bits/stdc++.h>
using namespace std;
int fact(int i){
   if(i==0){
    return 0;
   }
   if(i==1){
    return 1;
   } 
   return fact(i-1)+fact(i-2);

}
int main(){
       int n;
       cout<<"eneter number : ";
       cin>>n;
       for(int j=0; j<=n; j++){
       cout<<fact(j)<<" ";
       }
    return 0;
}