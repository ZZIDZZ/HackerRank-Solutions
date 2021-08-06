#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,i,k,b,j,c;
    vector<int> ar = {1, 3, 2, 6, 1, 2};
    n=ar.size();
    k=3;
    for(i=0;i<n;i++){
        b=ar[i];
        for(j=i+1;j<n;j++)if((b+ar[j]) % k == 0)c++;
    }
    cout<<c<<endl;
}