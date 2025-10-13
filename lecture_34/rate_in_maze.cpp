#include <iostream>
#include <vector>
using namespace std;
    //3 possibilities => path closed,out of bound,check if pos is not visited
bool isSafe(int srcx,int srcy, int newx, int newy,int maze[4][4], int row,int col,vector<vector<bool>>&visited){
    if ((newx >= 0 && newx < row) && (newy >=0 && newy < col)&&(maze[newx][newy] ==1) && (visited[newx][newy] == false))
    {
        return true;
    }
    else{
        return false;
    }
    
}

void printALLpath(int maze[4][4], int row, int col, int srcx, int srcy,string &output, vector<vector<bool>>&visited){
    //destination coordinates are[row-1][col-1]
    if (srcx == row-1 && srcy == col-1)
    {
        cout << output << endl;
        return;
    }
    
    //ek case solve kro then use recursion
    //up => 
    int newx = srcx-1;
    int newy = srcy;
    if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited))
    {
        //mark visited
        visited[newx][newy]
    }
}

int main(){
    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };
    int row = 4;
    int col = 4;

    int srcx = 0;
    int srcy = 0;
    string output = "";

    vector<vector<bool>> visited(row,vector<bool>(col,false));
    if(maze[0][0] == 0){
        cout << "no path exists" << endl;
    }
    else{
        visited[srcx][srcy] = true;
        printALLpath(maze,row,col,srcx,srcy,output);
    }
}