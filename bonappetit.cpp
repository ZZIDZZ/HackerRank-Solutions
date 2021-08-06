#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n,k,i,s=0,b,dif;
    string msg;
    vector<int> bill = {3,10,2,9};
    n=bill.size();
    b=12;
    k=1;
    for(i=0;i<n;i++)if(i!=k) s+=bill[i];
    dif=abs((s/2)-b);
    msg=dif==0?"Bon Appetit":to_string(dif);
    cout<<msg<<endl;
}