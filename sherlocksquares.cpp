#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    int a,b,i,sum=0,n,test,limit;
    vector<int> sums;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        test=ceil(sqrt(a));
        limit=floor(sqrt(b));
        while(test<=limit){
            if(test*test <=b && test*test>=a){
                sum++;
            }
            test++;
        }
        sums.push_back(sum);
        sum=0;
    }
    int u = sums.size();
    for(i=0;i<u;i++){
        cout<<sums[i]<<endl;
    }
}