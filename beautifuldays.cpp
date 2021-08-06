#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

int main(){
    int st,ed,i,k,revTemp,count=0,temp;
    std::string convTemp="";
    std::cin>>st>>ed>>k;
    for(i=0;i<=ed-st;i++){
        convTemp="";
        temp=st+i;
        convTemp = std::to_string(temp);
        std::reverse(convTemp.begin(), convTemp.end());
        revTemp = std::stoi(convTemp);
        if(abs(temp-revTemp)%k == 0 || temp==revTemp)count++;
    }
    std::cout<<count<<std::endl;
}