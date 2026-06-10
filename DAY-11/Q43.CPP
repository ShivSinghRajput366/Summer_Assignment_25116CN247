#include <bits/stdc++.h>
using namespace std;
int f(int i){
   int f=1;
    for(int j=2;j<=i/2; j++){
      
    if(i%j==0){
        f=0;
        break;
    } 
    }     if(f==1){
        cout<<"prime number";
    }else{cout<<"not prime";}
      return ;

}
main(){
int a;
    cout<<"enter 1st number : ";
    cin>>a;
    cout<<f(a);
    
    return 0;
}