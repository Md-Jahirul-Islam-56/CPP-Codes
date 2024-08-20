#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        int count = 0;
        bool happy = false;
        cin >> s;
        
        for (char c:s)
        {
            if ((c== 'a') || (c== 'e') || (c== 'i') || (c == 'o') || (c == 'u'))
            {
                c=tolower(c);
                count++;
                if (count >= 3)
                {
                    happy = true;
                    break;
                }
            }
            else{
                count=0;
            }
        }

        if (!happy)
        {
            cout << "Sad" << endl;
        }
        else
        {
            cout << "Happy" << endl;
        }
    }
    return 0;
}