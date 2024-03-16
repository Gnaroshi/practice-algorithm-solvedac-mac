// problem:
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
        int n, cnt = 1, mx = 1;
        cin >> n;
        string a, b, mn = "", t;
        cin >> a >> b;
        for (int i = 0; i <= n; i++)
            mn += '2';
        vector<string> v;
        bool chk;
        for (int i = 1; i <= n; i++)
        {
            chk = false;
            t = a.substr(0, i) + b.substr(i - 1);
            for (int j = 0; j <= n; j++)
            {
                if (t[j] == '1' && mn[j] == '0')
                {
                    chk = true;
                    break;
                }
            }
            if (chk)
                continue;
            if (t < mn)
            {
                cnt = 1;
                mx = 1;
                mn = t;
            }
            else if (t == mn)
                cnt++, mx = max(mx, cnt);
        }
        mx = max(mx, cnt);
        cout << mn << '\n';
        cout << mx << '\n';
    }
    // TLE

    return 0;
}