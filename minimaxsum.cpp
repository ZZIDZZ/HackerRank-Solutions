#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <long> ar = {4,8,2,10,6};
    int i,n,j;
    long ss=0,sb=0,m;
    n=ar.size();
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            if(ar[j]>ar[j+1]){
                m=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=m;
            }
        }
    }
    for(i=0;i<4;i++)ss +=ar[i];
    for(i=1;i<5;i++)sb+=ar[i]; 
    for(i=0;i<n;i++)cout<<ar[i];
}