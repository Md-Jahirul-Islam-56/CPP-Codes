/* 
Chef has X 5 rupee coins and Y 10 rupee coins. Chef goes to a shop to buy chocolates for Chefina where each chocolate costs 
Z rupees. Find the maximum number of chocolates that Chef can buy for Chefina.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int T;

    cin>>T;

    for (int i = 0; i < T; i++)
    {
        int x,y;
        float z;
        cin>>x>>y>>z;

        int tc=((5*x)+(10*y));

        int numChoc= (tc/z);
        cout<<numChoc<<endl;

    }
    

    return 0;
}