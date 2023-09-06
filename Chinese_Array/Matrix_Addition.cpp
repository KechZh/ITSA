#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int mat1[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>mat1[i][j];
    cin>>row>>col;
    int mat2[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>mat2[i][j];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++){
            if(j<col-1)
                cout<<mat1[i][j]+mat2[i][j]<<" ";
            else
                cout<<mat1[i][j]+mat2[i][j]<<endl;
        }
    return 0;
}
