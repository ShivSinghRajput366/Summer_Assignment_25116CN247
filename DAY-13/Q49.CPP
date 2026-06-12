#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[n];
    int sum=0;
    cout<<"number of element";
    cin>>n;
    cout<<"enter number = ";
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}