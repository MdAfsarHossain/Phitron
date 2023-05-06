#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long ans = 1;
        for (int i = l-1; i < r; i++)
        {
            ans = ans * a[i];
        }

        cout << ans << "\n";
    }

    return 0;
}

