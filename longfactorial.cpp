#include<iostream>
using namespace std;

int main(){
    int i,n;
    long long ans;
    ans=1;
    cin>>n;
    for(i=n;i>0;i--)ans*=i;
    cout<<ans;
}