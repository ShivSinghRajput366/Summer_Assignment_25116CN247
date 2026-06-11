#include <bits/stdc++.h>
using namespace std;
int f(int x){
    if(x%2==0){
        return 1;
    }else{ return 0; }
}
int main(){
    
    int n;
    int a[n];
    int sum=0;
    cout<<"number of element";
    cin>>n;
    cout<<"enter number = ";
    for(int i=0; i<n; i++){
      cin>>a[i];
      sum = sum + f(a[i]);
    }
    cout<<"total number of even are : "<<sum;
    cout<<"total number of odd are : "<<n-sum;

    return 0;
}