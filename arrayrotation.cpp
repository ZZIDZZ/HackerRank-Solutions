#include <iostream>
#include <array>

using namespace std;
int main(){
    int i,n,d,j=0;
    cin>>n>>d;
    int arr[n];
    for(i=0;i<n;i++)cin>>arr[i];
    int temp[d];
    for(i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }
    for(i=n-d;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }

}