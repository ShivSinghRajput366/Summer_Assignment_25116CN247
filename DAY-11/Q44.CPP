#include <bits/stdc++.h>
using namespace std;
int f(int i){
    if(i==0){
        return 0;
    } else if(i==1){
        return 1;
    }
    return i*f(i-1);
}
main(){
int a;
    cout<<"enter 1st number : ";
    cin>>a;
    
    cout<<f(a);
    
    return 0;
}