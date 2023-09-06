#include<bits/stdc++.h>
using namespace std;
int main(){
    int month;
    cin>>month;
    month%=12;
    switch(month/3){
        case 0:
            cout<<"Winter"<<endl;
            break;
        case 1:
            cout<<"Spring"<<endl;
            break;
        case 2:
            cout<<"Summer"<<endl;
            break;
        case 3:
            cout<<"Autumn"<<endl;
            break;
    }
    return 0;
}
