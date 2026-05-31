#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum = 0;
    cout<<"enter your number : ";
    cin>>n;
    for(int i=0; i<=n; i++){
        sum = sum + i;
    }
    cout<<"sum is equalto:"<<sum; 
    return 0;
}