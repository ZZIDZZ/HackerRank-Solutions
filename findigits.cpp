#include <iostream>
#include <string>
#include <vector>

int main(){
    int i,t,temp,j,div,n;
    std::vector<int> divs{};
    std::string tempNum;
    std::cin>>t;
    for(i=0;i<t;i++){
        div=0;
        std::cin>>tempNum;
        n=tempNum.size();
        temp = std::stoi(tempNum);
        std::cout<<"dor"<<std::endl;
        for(j=0;j<n;j++){
            if(temp % (int(tempNum[j])-48) == 0){
                div++;
            }
        }
        divs.push_back(div);
        tempNum="";
    }
    for(i=0;i<t;i++){
        std::cout<<divs[i]<<std::endl;
    }

}