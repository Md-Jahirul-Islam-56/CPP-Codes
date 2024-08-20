#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, s = 0, t = 0;
        cin >> N;

        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        s = a[0];
        for (int i = 0; i < N; i++)
        {

            if (a[i] >= s)
            {
                s = a[i];
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (a[i] == s)
            {
                a[i] = 0;
            }
        }
        t = 0;
        for (int i = 0; i < N; i++)
        {
            if (a[i] > t)
            {
                t = a[i];
            }
        }
        cout << s + t << endl;
    }

    return 0;
}