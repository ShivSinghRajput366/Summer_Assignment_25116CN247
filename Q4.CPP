#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum = 1;
    cout<<"enter your number : ";
    cin>>n;
    while(n!=0){
       for(int i=1; i<n; i++){ 
        n= n/10;
        sum = sum + 1;}
    } 
    cout<<"number of digit  is equalto: "<<sum; 
    return 0;
}