#include<iostream>

using namespace std;

void LinearIndx(int matrix[8][8], int row,int column){
    int i, j;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(i<j){
                 cout <<"0" << " ";
            }
            else 
            cout << matrix[i][j] << " ";
            
        }
        cout << endl;

    } 
}

int main(){
    int matrix[8][8] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 8, column = 8;
    cout << "lower triangle matrix \n";
    
    LinearIndx(matrix,row, column);
    return 0;
}