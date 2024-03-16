// problem: Gleaming the Cubes
// id: 20386
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        vector<int> x(n), y(n), z(n), x2(n), y2(n), z2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i] >> z[i] >> d;
            x2[i] = x[i] + d;
            y2[i] = y[i] + d;
            z2[i] = z[i] + d;
        }
        cout << max(*min_element(x2.begin(), x2.end()) - *max_element(x.begin(), x.end()), 0) * max(*min_element(y2.begin(), y2.end()) - *max_element(y.begin(), y.end()), 0) * max(*min_element(z2.begin(), z2.end()) - *max_element(z.begin(), z.end()), 0) << '\n';
    }

    return 0;
}