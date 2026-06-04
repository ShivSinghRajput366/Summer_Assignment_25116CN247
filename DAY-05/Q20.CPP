#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    int x = n;
    
        int big;
     for(int i=2;i<=x; i++){
         int prime = 1 ;
        for (int j = 2; j<=i/2; j++){
         
        if(i%j == 0){
            prime = 0;
        }}

        if(prime == 1){
            if(n%i == 0){
                 big = i;
            }    
        }
     }
     cout<<"biggest prime factor is : "<<big;
    }
    
