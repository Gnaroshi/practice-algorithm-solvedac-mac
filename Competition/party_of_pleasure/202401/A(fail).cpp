// problem: A번 - 장난감 강아지
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k, r, c;
    string s;
    cin >> n >> k >> s;
    int cnt[4] = {0};
    for (auto i : s)
    {
        if (i == 'R')
            cnt[0]++;
        else if (i == 'L')
            cnt[1]++;
        else if (i == 'U')
            cnt[2]++;
        else if (i == 'D')
            cnt[3]++;
    }
    bool tchk = true;
    for (int i = 1; i < 4; i++)
    {
        if (!cnt[i] || !cnt[i - 1])
        {
            cout << "NO";
            return 0;
        }
        if (cnt[i] != cnt[i - 1])
            tchk = false;
    }
    r = c = 0;
    bool chk = tchk;
    for (long long j = 0; j < k; j++)
    {
        for (auto i : s)
        {
            if (i == 'R')
                r++;
            else if (i == 'L')
                r--;
            else if (i == 'U')
                c++;
            else if (i == 'D')
                c--;
            if (r == c && r == 0)
            {
                chk = true;
                break;
            }
        }
        if (chk)
            break;
    }
    cout << (chk ? "YES\n" : "NO\n");

    return 0;
}