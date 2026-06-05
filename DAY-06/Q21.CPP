#include <bits/stdc++.h>
using namespace std;
int main(){
       int n;   
       cout<<"enter number : ";
       cin>>n;
       int x=n;
       int bin[32];
       int i=0;
       while(x>0){
         bin[i]=x%2;
         x = x/2;
         i++;
       }
       for(int j=i-1; j>=0; j--){
        cout<<bin[j];
       }
    return 0;
}