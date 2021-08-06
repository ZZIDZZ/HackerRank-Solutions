#include <iostream>

using namespace std;

int main()
{
    int len,i,j,k,l;
    len = 100;
    l = 0;
    while(l < 2){
        k = len;
        for(i=0;i<len;i++){
            cout<<"|";
            for(j=0;j<k;j++){
                cout<<"/";
            }
            for(j=len;j>(k-1);j--){
                if(j>len-50){
                    cout<<"#";
                }
                else{
                    cout<<"/";
                }
            }
            for(j=k-1;j<len-1;j++){
                if(j > len-50){
                    cout<<"#";
                }
                else cout<<"/";
            }
            for(j=0;j<k;j++){
                cout<<"/";
            }
            cout<<"|";
            cout<<endl;
            k--;
        }
        k = len;
        for(i=0;i<len;i++){
            cout<<"|";
            for(j=k-1;j<len;j++){
                cout<<"/";
            }
            
            for(j=0;j<k;j++){
                if(j<50){
                    cout<<"#";
                }
                else cout<<"/";
            }
            for(j=0;j<k-1;j++){
                if(j>k-50){
                    cout<<"#";
                }
                else cout<<"/";
            }
            for(j=k-1;j<len;j++){
                cout<<"/";
            }
            cout<<"|";
            cout<<endl;
            k--;
        }
        l++;
    }
    
}