#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    for (int n = 0; n < T; n++)
    {
        string x, y;
        int z=99999;
        cin >> x;
        cin >> y;

        x = x.substr(0, y.length());
        y = y.substr(0, x.length());

        for (int i = 0; i < x.length(); i++)
        {

            for (int j = 0; j < y.length(); j++)
            {
                if ((y[j] == '?') || (x[i] == '?') || (x[i] == y[j]))
                {
                    i++;
                    continue;
                }

                else if (x[i] != y[j])
                {
                    z = 0;
                    // cout<<i<<" "<<j<<endl;
                }
            }
            if (z != 0)
            {
                z = 1;
            }
        }

        if (z == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}