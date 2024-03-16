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
        int n;
        cin >> n;
        int cnt[3][10];
        for (int i = 0; i < 3; i++)
            fill(cnt[i], cnt[i] + 10, 0);
        string t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t[0] == 'R')
                cnt[0][t[1] - '0']++;
            else if (t[0] == 'Y')
                cnt[1][t[1] - '0']++;
            else
                cnt[2][t[1] - '0']++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t[0] == 'R')
                cnt[0][t[1] - '0']--;
            else if (t[0] == 'Y')
                cnt[1][t[1] - '0']--;
            else
                cnt[2][t[1] - '0']--;
        }
        bool chk = true;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (cnt[i][j] != 0)
                    chk = false;
            }
        }

        if (chk)
            cout << "NOT ";
        cout << "CHEATER\n";
    }

    return 0;
}