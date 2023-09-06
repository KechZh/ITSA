#include <bits/stdc++.h>

#define MAX 70010

using namespace std;

int main(){
    int n;
    int num;
    bool exist[MAX];

    scanf("%d", &n);

    memset(exist, false, sizeof(exist));

    while(scanf("%d", &num) != EOF)
        exist[num] = true;

    for(int i = 1; i <= n; i++)
        if(exist[i] == false)
            printf("%d\n", i);

    return 0;
}