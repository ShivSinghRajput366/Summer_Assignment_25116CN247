#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num,sum=0;
    cout<<"enter the number = ";
    cin>>n;
    while(n>0){
        
        num=n%10;
        sum = num + sum;
        n=n/10;  
    }
      cout<<"sum of digit is : "<<sum;


    return 0;
}