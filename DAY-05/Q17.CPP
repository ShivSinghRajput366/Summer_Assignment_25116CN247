#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int sum=0;
    int x = n;
    for(int i=1; i<x; i++){
        if(x%i == 0){
            sum = sum + i;
        } }
        if(sum==n){
            cout<<"perfect number";
        }else{ cout<<"not perfect"; }
    
}