#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X, sum = 0;
        cin >> N >> X;

        int A[N], B[N];

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
            if (A[i] >= X)
            {
                sum = sum + B[i];
            }
        }

        cout << sum << endl;
    }

    return 0;
}