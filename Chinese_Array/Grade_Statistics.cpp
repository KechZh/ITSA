#include<bits/stdc++.h>
using namespace std;
double compute_average(vector<double> grade){
    double total=0;
    for(int i=0;i<grade.size();i++)
        total+=*(grade.begin()+i);
    return total/grade.size();
}
int main(){
    vector<double> ave,chi,eng,math;
    int n;
    cin>>n;
    while(n--){
        double a,b,c;
        cin>>a>>b>>c;
        ave.push_back(a);
        ave.push_back(b);
        ave.push_back(c);
        chi.push_back(a);
        eng.push_back(b);
        math.push_back(c);
    }
    cout<<fixed<<setprecision(1);
    cout<<compute_average(ave)<<" "<<compute_average(chi)<<" "<<compute_average(eng)<<" "<<compute_average(math)<<endl;
    return 0;
}
