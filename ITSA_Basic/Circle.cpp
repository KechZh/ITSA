#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    double dis=sqrt(pow(x,2)+pow(y,2));
    if(dis<=100)
        cout<<"inside"<<endl;
    else
        cout<<"outside"<<endl;
    return 0;
}
