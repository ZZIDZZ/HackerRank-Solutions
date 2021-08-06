#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main(){
    std::vector<int> arr = {1,2,3,4,5,4,3,2,1,3,4};
    int i,n,b,s;
    n=arr.size();
    std::vector<int> c{};
    for(i=0;i<5;i++)c.push_back(0);
    for(i=0;i<n;i++)c[arr[i]-1]++;
    b=*max_element(c.begin(), c.end());
    for(i=0;i<c.size();i++){if(c[i]==b){s=i+1; break;}}
    std::cout<<s<<std::endl;    
}