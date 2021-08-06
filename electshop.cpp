#include <iostream>
#include <string> 
#include <vector>

using namespace std;

int main(){
    int b,i,j,prc=-1,bufp;
    b=60;
    vector<int> k = {40,50,60};
    vector<int> m = {5,8,12};
    for(i=0;i<k.size();i++){
        for(j=0;j<m.size();j++){
            bufp=k[i]+m[j];
            if(bufp <= b && bufp>prc)prc=bufp;
        }
    }
    cout<<prc<<endl;
}
