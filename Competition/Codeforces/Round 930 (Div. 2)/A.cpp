// problem: A. Shuffle Party
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
    while (tc--)
    {
        int n, cur = 1;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            if (i % cur == 0)
            {
                cur = i;
                i += i - 1;
            }
        }
        cout << cur << '\n';
    }

    return 0;
}