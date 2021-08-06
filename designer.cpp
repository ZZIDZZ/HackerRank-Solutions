#include<iostream>
#include<string>

int main(){
    int i,th=1,h,n;
    std::string word;
    int heights[26];
    for(i=0;i<26;i++)std::cin>>heights[i];
    std::cin>>word;
    n=word.size();
    for(char i : word){
        h=heights[int(i)-int('a')];
        if(h>th)th=h;
    }
    std::cout<<th*n<<std::endl;
}