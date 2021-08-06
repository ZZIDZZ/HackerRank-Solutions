#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i,j,n,cutLen=1001,sum=0,tmp,nextcutlen=1001;
    vector<int> sticks;
    vector<int> sums;
    bool cutting = true;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>tmp;
        nextcutlen=tmp<nextcutlen?tmp:nextcutlen;
        sticks.push_back(tmp);
    }
    while(cutting){
        cutLen=nextcutlen;
        nextcutlen = 1001;
        for(i=0;i<n;i++){
            if(sticks[i]!=0){
                sum++;
                sticks[i]-=cutLen;
                if(sticks[i]!=0){
                    nextcutlen=sticks[i]<nextcutlen?sticks[i]:nextcutlen;
                }
            }
        }
        if(sum==0)cutting = false;
        else sums.push_back(sum);
        sum=0;
    }
    int sumsize = sums.size();
    for(i=0;i<sumsize;i++){
        cout<<sums[i]<<endl;
    }
}
