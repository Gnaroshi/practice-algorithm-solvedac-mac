// problem: C번 - 또 수열 문제야
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << (i % 2 ? 1 : 2) << ' ';

    return 0;
}