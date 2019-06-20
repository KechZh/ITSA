#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> score_list;
    cin>>n;
    for(int i=0;i<n;i++){
        int score;
        cin>>score;
        score_list.push_back(score);
    }
    sort(score_list.begin(),score_list.end());
    for(int i=0;i<n;i++)
        cout<<*(score_list.begin()+i)<<endl;
    return 0;
}
