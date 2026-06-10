#include <bits/stdc++.h>
using namespace std;
int f(int i){
    if(i==0){
        return 0;
    } else if(i==1){
        return 1;
    }
    return f(i-1)+f(i-2);
}
main(){
int a;
    cout<<"enter 1st number : ";
    cin>>a;
    for(int i=0; i<=a; i++){
    cout<<f(i);
    }
    return 0;
}