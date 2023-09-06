#include<bits/stdc++.h>
using namespace std;
int main(){
    long long ver[16][16];
    for(int i=0;i<16;i++)
        ver[0][i]=1;
    for(int i=1;i<16;i++)
        for(int j=i;j<16;j++){
            if(i==j)
                ver[i][j]=ver[i-1][j-1]+ver[i-1][j];
            else
                ver[i][j]=ver[i][j-1]+ver[i-1][j-1]+ver[i-1][j];
        }
    int ncase;
    cin>>ncase;
    while(ncase--){
        int fin;
        cin>>fin;
        cout<<ver[fin][fin]<<endl;
    }
    return 0;
}
