#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> candles = {2,4,1,4};
    int n,b,i,s;
    s=0;
    n=candles.size();
    b=candles[0];
    for(i=0;i<n;i++) b = (candles[i] > b) ? candles[i] : b;
    
    cout<<b<<endl;
    for(i=0;i<n;i++) if(b==candles[i]) s++;
    cout<<s<<endl;
}