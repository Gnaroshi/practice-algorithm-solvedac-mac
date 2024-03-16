// problem: Odd Man Out (Small)
// id: 12595
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        bool chk = false;
        for (int i = 0; i < n - 1; i += 2)
        {
            if (v[i] != v[i + 1])
            {
                chk = true;
                cout << v[i] << '\n';
                break;
            }
        }
        if (!chk)
            cout << v.back() << '\n';
    }

    return 0;
}