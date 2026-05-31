#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum = 1;
    cout<<"enter your number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        sum = sum*i;
    }
    cout<<"sum is equalto:"<<sum; 
    return 0;
}