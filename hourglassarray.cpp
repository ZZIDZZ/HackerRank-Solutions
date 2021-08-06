#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(){
    int i,j,k,l,sum,maxSum=-999,temp;
    int arr[6][6];
    for(i=0;i<6;i++)for(j=0;j<6;j++)cin>>arr[i][j];

    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            sum=0;
            for(k=j-1;k<=j+1;k++)sum+=arr[i-1][k];
            sum+=arr[i][j];
            for(k=j-1;k<=j+1;k++)sum+=arr[i+1][k];
            if(sum>maxSum)maxSum=sum;
        }
    }
    cout<<maxSum<<"\n";
}
