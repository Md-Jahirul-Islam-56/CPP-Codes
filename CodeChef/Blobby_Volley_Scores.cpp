#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, countA = 0, countB = 0;
        char turn = 'A';
        cin >> N;

        string a;
        cin >> a;

        a = a.substr(0, N);

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == turn)
            {
                if (a[i] == 'A')
                {
                    countA++;
                
                }
                else
                {
                    countB++;
                   
                }
            }
            else
            {

                if (a[i] == 'B')
                {
                    turn = 'B';
        
                }
                else 
                {
                    turn = 'A';
        
                }
            }
        }
        cout << countA << " " << countB << endl;
    }

    return 0;
}