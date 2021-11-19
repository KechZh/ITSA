#include <bits/stdc++.h>

#define MAX 500

using namespace std;

int main(){
    int n, m;
    string str1, str2;
    int match[MAX][MAX] = {0};

    scanf("%d %d\n", &n, &m);
    getline(cin, str1);
    getline(cin, str2);

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++){
            if(str1[i - 1] == str2[j - 1])
                match[i][j] = match[i - 1][j - 1] + 1;
            else
                match[i][j] = max(match[i - 1][j], match[i][j - 1]);
        }

    printf("%d\n", match[n][m]);

    return 0;
}