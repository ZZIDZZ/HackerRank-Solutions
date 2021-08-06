#include <iostream>
#include <string>

using namespace std;

int main(){
    string name[5] = {"Adam ", "Joe ", "David ", "Kate ", "Emily "};
    int len = sizeof(name)/sizeof(name[0]);
    int i;
    for (i=0;i<len-1;i++){
        cout<<name[i].append(name[i+1])<<endl;
    }
    for(i=len;i>0;i--){
        cout<<name[i].append(name[i-1])<<endl;
    }
}