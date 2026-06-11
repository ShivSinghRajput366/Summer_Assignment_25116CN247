#include <bits/stdc++.h>
using namespace std;
int f(int x){   
    if(x==0){return 0; }
    if(x==1){return 1; }
    return f(x-1) + f(x-2);
}
int main(){
    int n;
    cout<<"enter number = ";
    cin>>n;
   for(int i=0; i<=n; i++){
    cout<<f(i)<<" ";
   }
    return 0;
}