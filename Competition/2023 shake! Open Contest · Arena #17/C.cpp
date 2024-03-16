// problem: C번 - 또 수열 문제야
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << t << ' ';
        t += 2;
    }

    return 0;
}