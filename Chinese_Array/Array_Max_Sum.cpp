#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[9];

    for(int i = 0; i < 9; i++)
        scanf("%d%*c", &arr[i]);

    sort(arr, arr + 9);

    printf("%d\n", arr[8] + arr[7] + arr[6]);

    return 0;
}