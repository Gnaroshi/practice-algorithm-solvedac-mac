// problem: CA번 - 하루 피부과
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int x1, x2, n[5];

int fn(int x)
{
    return n[0] * x * x * x / 3 + (n[1] - n[3]) * x * x / 2 + (n[2] - n[4]) * x;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> x1 >> x2;
    for (int i = 0; i < 5; i++)
        cin >> n[i];

    // ax2+(b-d)x+c-e
    // a/3 *x^3 + (b-d)/2 *x^2 + (c-e)x
    cout << (fn(x2) - fn(x1));

    return 0;
}