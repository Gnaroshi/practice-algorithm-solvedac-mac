// problem: A번 - 라면 공식
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    int a, b, x;
    while (tc--)
    {
        cin >> a >> b >> x;
        cout << a * (x - 1) + b << '\n';
    }

    return 0;
}