#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of arry : ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " elements :";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int hash[100]={0};
    
    for (int i = 0; i < n; i++) {
        hash[a[i]]++;
    } int big= INT_MIN;
      int x;
     for(int i=0; i<100; i++){
        if(hash[i]>big){
           big = hash[i];
           x=i;
        } 
    }
        cout<<"number with highest frequency is : "<<x;
    return 0;
}