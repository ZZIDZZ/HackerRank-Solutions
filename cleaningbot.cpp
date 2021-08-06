#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

int main(){
    int xpos,ypos,i,j;
    cin>>xpos>>ypos;
    char grid[5][5];
    string msg;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>grid[i][j];
        }
    }
    if(grid[xpos][ypos] == 'd'){
        msg = "CLEAN";
    }
    else {
        if(grid[xpos+1][ypos] && grid[xpos+1][ypos] == 'd') msg = "RIGHT";
        else if (grid[xpos-1][ypos] && grid[xpos-1][ypos] == 'd') msg = "LEFT";
        else if(grid[xpos][ypos+1] && grid[xpos][ypos+1] == 'd') msg = "UP";
        else if(grid[xpos][ypos-1] && grid[xpos][ypos-1] == 'd')msg = "DOWN";
        
    }

    
}