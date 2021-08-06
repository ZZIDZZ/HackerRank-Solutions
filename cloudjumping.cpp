#include <vector>
#include <iostream>
using namespace std;

int main(){
    int temp,i,n,steps;
    vector<int> clouds{};
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp;
        clouds.push_back(temp);
    }
    for(i=0;i<n;i++){
        if((i<n-2 && clouds[i+2] != 1) || clouds[i+1] == 1){
            steps++;
            i++;
        }
        else{
            steps++;
        }
    }
}