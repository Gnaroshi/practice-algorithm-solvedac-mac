// problem: 마라토너
// id: 9339
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
        int k, n, ca = 0, cb = 0x3f3f3f3f, h, m, t, at, ans = 0;
        cin >> k;
        vector<int> v(k);
        for (auto &i : v)
            cin >> i;
        cin >> n;
        while (n--)
        {
            cin >> t >> h >> m;
            if (find(v.begin(), v.end(), t) != v.end() && (h != -1 && m != -1))
            {
                at = h * 60 + m;
                if (at <= 360)
                {
                    ca++;

                    if (cb > at)
                    {
                        cb = at;
                        ans = t;
                    }
                }
            }
        }
        cout << ans << ' ' << ca << '\n';
    }

    return 0;
}