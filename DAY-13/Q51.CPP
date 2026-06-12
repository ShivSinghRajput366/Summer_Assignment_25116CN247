#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"number of element";
    cin>>n;
    int a[n];
    cout<<"enter number = ";
    for(int i=0; i<n; i++){
      cin>>a[i];
    }  int big = INT_MAX;
       int small = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>=small){
            small = a[i];
        }
        if(a[i]<=big){
            big = a[i];
        }
    }
    cout<<"biggest of number is = "<<small<<"\n";
    cout<<"smallest number is = "<<big;
    return 0;
}