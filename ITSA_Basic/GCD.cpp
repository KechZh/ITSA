#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int div=min(a,b);
    while(a%b!=0){
        div=a%b;
        a=b;
        b=div;
    }
    return div;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int div=gcd(num1,num2);
    cout<<div<<endl;
    return 0;
}
