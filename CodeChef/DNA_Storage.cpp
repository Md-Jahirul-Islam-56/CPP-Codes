#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int T;

    cin>>T;

    for (int i = 0; i < T; i++)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        s=s.substr(0,n);
        for(int j = 0; j < s.length(); j = j + 2)
        {
            if( (s[j] == '0') && (s[j+1] == '0') )
                cout << 'A';
            if( (s[j] == '0') && (s[j+1] == '1') )
                cout << 'T';
            if( (s[j] == '1') && (s[j+1] == '0') )
                cout << 'C';
            if( (s[j] == '1') && (s[j+1] == '1') )
                cout << 'G';
        }
        cout<<endl;
        
    }
    

    return 0;
}
