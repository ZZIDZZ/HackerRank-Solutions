#include <iostream>
#include <vector>

int main(){
    int i,k,n,temp,b;
    char coba = 97;
    std::vector<int> hei{};
    std::cin>>n;
    std::cin>>k;
    b=k;
    for(i=0;i<n;i++){
        std::cin>>temp;
        hei.push_back(temp);
    }
    for(i=0;i<n;i++)if(hei[i]>b)b=hei[i];
}