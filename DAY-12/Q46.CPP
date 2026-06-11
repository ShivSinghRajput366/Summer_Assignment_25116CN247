#include <bits/stdc++.h>
using namespace std;
int f(int x, int sum){
    int d; 
    d=x%10;
    if(x==0){return sum; }
    return f(x/10, sum + d*d*d);
}
int main(){
    int n;
    cout<<"enter number = ";
    cin>>n;
   if(f(n,0)==n){
    cout<<"angastrome ";
   }else{
    cout<<"not angastrome ";
   }
    return 0;
}