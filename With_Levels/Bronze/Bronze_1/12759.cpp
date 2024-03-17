// problem: 틱! 택! 토!
// id: 12759
// time taken:
#include <bits/stdc++.h>
using namespace std;

int brd[4][4];

int chkr(void)
{
    for (int i = 1; i <= 3; i++)
    {
        if (brd[i][1] == brd[i][2] && brd[i][1] == brd[i][3] && brd[i][1] != 0)
            return brd[i][1];
        else if (brd[1][i] == brd[2][i] && brd[1][i] == brd[3][i] && brd[1][i] != 0)
            return brd[1][i];
    }

    if (brd[1][1] == brd[2][2] && brd[1][1] == brd[3][3] && brd[1][1] != 0)
        return brd[1][1];
    if (brd[3][1] == brd[2][2] && brd[3][1] == brd[1][3] && brd[3][1] != 0)
        return brd[3][1];

    return 0;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, w = 0, t, ans = 0;
    int p[2] = {1, 1};
    cin >> n;
    if (n == 1)
        p[1] = 2;
    else
        p[0] = 2;
    bool chk = false;
    for (int i = 0; i < 9; i++)
    {
        cin >> a >> b;
        brd[a][b] = p[i % 2];
        t = chkr();
        if (t != 0 && ans == 0)
            ans = t;
    }

    cout << ans;

    return 0;
}
