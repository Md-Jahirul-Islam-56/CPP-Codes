/*
In Chefland, a valid phone number consists of 5 digits with no leading zeros.For example, 98765,10000,98765,10000, and 71023 are valid phone numbers while 04123,9231,04123,9231, and 872310 are not. Chef went to a store and purchased N items, where the cost of each item is X.Find whether the total bill is equivalent to a valid phone number.
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    
       
 int T;

    cin>>T;

    for (int i = 0; i < T; i++)
    {
        int n,x;
        cin>>n>>x;

        int totalX=n*x;

        if(totalX >=10000 && totalX <=99999){
          cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}