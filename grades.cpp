#include <iostream>
#include <vector>

int main(){
    std::vector<int> grades = {50,26,39,54,62,59,56,52,41};
    std::vector<int> gr = {};
    int i,n;
    n=grades.size();
    for(i=0;i<n;i++){
        if(grades[i]>=40){
            if(grades[i]%5>=2)grades[i]+=5-(grades[i]%5);
        }
        gr.push_back(grades[i]);
    }
    for(i=0;i<gr.size();i++){
        std::cout<<gr[i]<<std::endl;
    }

}