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
    }  int sum=0;
    for(int i=0; i<n; i++){
        sum = sum+a[i];
    }
    cout<<"sum of arry is = "<<sum<<"\n";
    cout<<"avrage of array is = "<<(float)sum/n;
    return 0;
}