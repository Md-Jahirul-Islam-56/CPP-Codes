#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, counta = 0, countb = 0,maxa=0,maxb=0;
        cin >> N;
        int a[N], b[N];

        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < N; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < N; i++)
        {
            if (a[i] > 0)
            {
                counta++;
            }

            if (b[i] > 0)
            {
                countb++;
            }

            if (a[i] == 0)
            {
                maxa=max(maxa, counta);
                counta = 0;
               
            }
            if (b[i] == 0)
            {
                maxb=max(maxb, countb);
                countb = 0;
               
            }
        }

         if (counta != 0)
            {

                maxa=max(maxa, counta);
               
            }
            if (countb != 0)
            {
                maxb=max(maxb, countb);
           
               
            }

        if (maxa > maxb)
        {
            cout << "Om" << endl;
        }
        else if (maxa == maxb)
        {
            cout << "Draw" << endl;
        }
        else
        {
            cout << "Addy" << endl;
        }
    }

    return 0;
}