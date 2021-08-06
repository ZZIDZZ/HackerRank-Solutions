#include <iostream>
#include <vector>

using namespace std;

int main(){
    int *b,*s;
    int x1=0;
    int v1=3;
    int x2=4;
    int v2=2;
    string msg;
    if(x1>x2) {b=&x1; s=&x2;}
    else if(x1<x2) {b=&x2; s=&x1;}
    while(*b>*s){
        x1+=v1;
        x2+=v2;
    }
    if(*b==*s)msg="YES";
    else if(*b<*s)msg="NO";
    cout<<msg<<endl;

}