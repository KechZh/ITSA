#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int a=((num/1000)+7)%10;
    int b=((num/100)+7)%10;
    int c=((num/10)+7)%10;
    int d=(num+7)%10;
    cout<<c<<d<<a<<b<<endl;
    return 0;
}
