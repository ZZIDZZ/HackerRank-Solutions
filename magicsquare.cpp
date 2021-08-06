#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<int>> square{
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 5}
    };
    vector<int> sum = {0, 0, 0, 0, 0, 0};
    vector<int> usum = {};
    int i,j,cost=0,mcost=999;
    int *ts=&sum[2],*rs=&sum[4],*ls=&sum[5],*rds=&sum[0],*lds=&sum[1],*bs=&sum[3];
    for(i=0;i<square.size();i++){
        for(j=0;j<square[i].size();j++){
            if(i==j)sum[0]+=square[i][j];
            if(i+j==2)sum[1]+=square[i][j];
            if(i==0)sum[2]+=square[i][j];
            else if(i==2)sum[3]+=square[i][j];
            if(j==0)sum[4]+=square[i][j];
            else if(j==2)sum[5]+=square[i][j];
        }
    }
    // for(i=0;i<6;i++){
    //     for(j=0;j<5;j++){
    //         if(sum[j]>sum[j+1]){
    //             m=sum[j];
    //             sum[j]=sum[j+1];
    //             sum[j+1]=m;
    //         }
    //     }
    // }
    for(i=0;i<sum.size();i++){
        cout<<sum[i]<<endl;
        if ( find(usum.begin(), usum.end(), sum[i]) == usum.end() )usum.push_back(sum[i]);
    }
    for(i=0;i<usum.size();i++){
        if(*lds == usum[i] && *rds == usum[i]){
            
        }
        for(j=0;j<sum.size();j++){
            cost+=abs(sum[j]-usum[i]);
        }
        if(cost<mcost)mcost=cost;
        cost=0;
    }
    cout<<mcost<<endl;

    
}