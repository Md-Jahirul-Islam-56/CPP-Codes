#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int s;
        cin >> s;
        int n[s];
        bool flag = true; 

        for (int i = 0; i < s; i++)
        {
            cin >> n[i];
        }

        for (int i = 1; i < s; i++)
        {
            if (n[i] < n[i - 1])
            {
                flag = false;
                break; 
            }
        }

        if (flag)
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
