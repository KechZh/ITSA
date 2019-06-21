#include<bits/stdc++.h>
using namespace std;
class account{
private:
    int number;
    int password;
    int deposit;
public:
    account();
    account(int in_num,int in_pwd,int in_dep){
        number=in_num;
        password=in_pwd;
        deposit=in_dep;
    }
    bool log_in(int in_num,int in_pwd){
        if(in_num==number&&in_pwd==password)
            return true;
        else
            return false;
    }
    void output_deposit(){
        cout<<deposit<<endl;
    }
};
int main(){
    vector<account> vec;
    vec.push_back(account(123,456,9000));
    vec.push_back(account(456,789,5000));
    vec.push_back(account(789,888,6000));
    vec.push_back(account(336,558,10000));
    vec.push_back(account(775,666,12000));
    vec.push_back(account(566,221,7000));
    int ncase;
    cin>>ncase;
    while(ncase--){
        int num,pwd;
        cin>>num>>pwd;
        bool found=false;
        for(account i:vec){
            found=i.log_in(num,pwd);
            if(found){
                i.output_deposit();
                break;
            }
        }
        if(!found)
            cout<<"error"<<endl;
    }
    return 0;
}
