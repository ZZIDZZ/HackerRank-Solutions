#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string seq="UDDDUDUU";
    int i,n,vly=0,mnt=0,y;
    y=(seq[0]=='U')?1:-1;
    n=seq.size();
    for(i=1;i<n;i++){
        if(seq[i]=='U'){
            y+=1;
            if(y==0)vly+=1;
        }
        else if(seq[i]=='D'){
            y-=1;
            if(y==0)mnt+=1;
        }
    }
    cout<<vly<<endl;
    cout<<mnt<<endl;
}