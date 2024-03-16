// problem: The n Days of Christmas
// id: 9488
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        cout << ((n * (n + 1)) / 2 * (n + 2)) / 3 << "\n";
    }

    return 0;
}