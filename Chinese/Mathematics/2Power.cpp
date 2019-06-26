#include<bits/stdc++.h>
using namespace std;
int main(){
    int pow;
    cin>>pow;
    if(pow<31)
        cout<<(1<<pow)<<endl;
    else
        cout<<"Value of more than 31"<<endl;
    return 0;
}
