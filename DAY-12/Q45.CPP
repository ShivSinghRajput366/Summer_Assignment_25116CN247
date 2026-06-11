#include <bits/stdc++.h>
using namespace std;
int f(int x, int sum){
    int d; 
    d=x%10;
    if(x==0){return sum; }
    return f(x/10, sum*10+d);
}
int main(){
    int n;
    cout<<"enter number = ";
    cin>>n;
   if(f(n,0)==n){
    cout<<"palindrome ";
   }else{
    cout<<"not paalindrome ";
   }
    return 0;
}