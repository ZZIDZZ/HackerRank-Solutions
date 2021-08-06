#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <math.h>
using namespace std;

int main(){
    int i,j,sb,ba,k;
    vector<int> a = {2};
    vector<int> b = {20,30,12};
    ba= *max_element(a.begin(), a.end());
    sb= *min_element(b.begin(), b.end());
    vector<int> tr = {};
    for(i=ba;i<=sb;i+=ba){
        tr.push_back(i);
        for(j=0;j<a.size();j++){
            if(i%a[j]!=0){
                tr.pop_back();
                continue;
            }
        }
    }
    
    for(i=tr.size()-1;i>=0;i--){
            for(j=0;j<tr.size();j++){
                if(b[j]%tr[i] != 0){
                    tr.pop_back();
                    i--;
                    j--;
                }
            }
        }
    
    for(i=0;i<tr.size();i++){
        cout<<tr[i]<<endl;
    }
}