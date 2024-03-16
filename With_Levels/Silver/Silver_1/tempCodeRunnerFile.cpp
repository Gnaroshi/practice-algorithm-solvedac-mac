// problem: 언더프라임
// id: 1124
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 1000001;

vector<int> p;
bool isp[MX];

bool fn(int n)
{
    int cnt = 0;
    while (n > 1)
    {
        for (auto i : p)
        {
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
            if (n == 1)
                break;
        }
    }
    return isp[cnt];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fill(isp, isp + MX, 1);
    isp[0] = isp[1] = 0;
    for (int i = 2; i < MX; i++)
    {
        if (isp[i])
            p.push_back(i);
        for (auto j : p)
        {
            if (i * j >= MX)
                break;
            isp[i * j] = 0;
            if (i % j == 0)
                break;
        }
    }
    int a, b, ans = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
        ans += fn(i);
    cout << ans;

    return 0;
}