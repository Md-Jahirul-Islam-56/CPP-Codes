#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, count = 0;
        cin >> N;

        int A[N], B[N], y[N], z[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }

        for (int i = 0; i < N; i++)
        {
            z[i] = 0;
            y[i] = 0;

            if (B[i] > (A[i] * 2))
            {
                z[i] = 1;
            }
            if (A[i] > (B[i] * 2))
            {
                y[i] = 1;
            }
            if (y[i] == z[i])
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}