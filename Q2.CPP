#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum = 1;
    cout<<"enter your number : ";
    cin>>n;
    for(int i=0; i<=10; i++){
        sum = n*i;

        cout<<n<<" X "<<i<<" = "<<sum<<"\n";
    } 
    return 0;
}