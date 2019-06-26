#include<bits/stdc++.h>
using namespace std;
int main(){
    int upper,lower,height;
    while(cin>>upper>>lower>>height){
        cout<<fixed<<setprecision(1);
        cout<<"Trapezoid area:"<<(double)(upper+lower)*height/2<<endl;;
    }
    return 0;
}
