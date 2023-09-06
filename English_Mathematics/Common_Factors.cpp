#include <bits/stdc++.h>

#define MAX 100000

using namespace std;

int gcd(int a, int b){
    int tmp;

    while(b > 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }

    return a;
}

vector<int> find_factor(int n){
    vector<int> fac;

    for(int i = 2; i <= n; i++)
        if(n % i == 0)
            fac.push_back(i);

    return fac;
}

int main(){
    vector<int> num, fac;
    int common_gcd;
    int tmp;

    while(scanf("%d", &tmp) != EOF)
        num.push_back(tmp);

    common_gcd = num[0];

    for(int i = 0; i < num.size(); i++)
        common_gcd = gcd(common_gcd, num[i]);

    fac = find_factor(common_gcd);

    printf("Common factor in ascending order:\n");

    for(int i = 0; i < fac.size(); i++){
        if(i < fac.size() - 1)
            printf("%d ", fac[i]);
        else
            printf("%d\n", fac[i]);
    }

    return 0;
}