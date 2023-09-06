#include<bits/stdc++.h>
using namespace std;
class student{
private:
    string id;
    string name;
    string dep;
public:
    student();
    student(string stu_id,string stu_name,string stu_dep){
        id=stu_id;
        name=stu_name;
        dep=stu_dep;
    }
    bool search_data(int field,string data){
        if(field==1&&id==data)
            return true;
        if(field==2&&name==data)
            return true;
        if(field==3&&dep==data)
            return true;
        return false;
    }
    void output_data(){
        cout<<id<<" "<<name<<" "<<dep<<endl;
    }
};
int main(){
    vector<student> vec;
    vec.push_back(student("123","Tom","DTGD"));
    vec.push_back(student("456","Cat","CSIE"));
    vec.push_back(student("789","Nana","ASIE"));
    vec.push_back(student("321","Lim","DBA"));
    vec.push_back(student("654","Won","FDD"));
    int ncase;
    cin>>ncase;
    while(ncase--){
        int field;
        string data;
        cin>>field>>data;
        for(student i:vec)
            if(i.search_data(field,data)){
                i.output_data();
                break;
            }
    }
    return 0;
}
