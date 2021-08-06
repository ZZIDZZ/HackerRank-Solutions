#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<std::vector<int>>> posSq{
        {{8, 3, 4},{1, 5, 9},{6, 7, 2}},
        {{4, 9, 2},{3, 5, 7},{8, 1, 6}},
        {{2, 7, 6},{9, 5, 1},{4, 3, 8}},
        {{6, 1, 8},{7, 5, 3},{2, 9, 4}},
        {{4, 3, 8},{9, 5, 1},{2, 7, 6}},
        {{8, 1, 6},{3, 5, 7},{4, 9, 2}},
        {{6, 7, 2},{1, 5, 9},{8, 3, 4}},
        {{2, 9, 4},{7, 5, 3},{6, 1, 8}},
    };
    int sq[3][3];
    int i,j,k,cost,minCost=999;
    for(i=0;i<3;i++)for(j=0;j<3;j++)std::cin>>sq[i][j];
    for(i=0;i<posSq.size();i++){
        cost=0;
        for(j=0;j<3;j++)for(k=0;k<3;k++)cost+=abs(posSq[i][j][k]-sq[j][k]);
        minCost=(cost<minCost)?cost:minCost;
    }
    std::cout<<minCost<<std::endl;
}