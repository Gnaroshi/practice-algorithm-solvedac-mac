// problem: Epideminology
// id: 19603
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, n, r;
    cin >> p >> n >> r;
    if (r == 1)
        cout << p / n;
    else
        cout << int(log((p * r - p + n) / n) / log(r));

    return 0;
}