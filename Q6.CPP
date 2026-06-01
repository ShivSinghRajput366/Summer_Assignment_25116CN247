#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num,sum=0;
    cout<<"enter the number = ";
    cin>>n;
    while(n>0){
        
        num=n%10;
        sum = sum*10 + num;
        n=n/10;
    }
      cout<<"reverse of digit is : "<<sum;


    return 0;
}