#include <iostream>
#include <string>
#include <vector>

int main(){
    int i,n,k,t,j,tmp,present;
    std::string msg="";
    std::cin>>t;
    for(j=0;j<t;j++){
        present=0;
        std::cin>>n;
        std::cin>>k;
        for(i=0;i<n;i++){
            std::cin>>tmp;
            if(tmp<=0)present++;
        }
        msg=(present>=k)?msg+"NO\n":msg+"YES\n";
    }
    std::cout<<msg;
}