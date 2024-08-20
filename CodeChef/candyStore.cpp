/*
Chef has started working at the candy store. The store has 100 chocolates in total. Chef’s daily goal is to sell X chocolates. For each chocolate sold, he will get 1 rupee. However, if Chef exceeds his daily goal, he gets 2 rupees per chocolate for each extra chocolate. If Chef sells Y chocolates in a day, find the total amount he made.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int T;

    cin>>T;

    for (int i = 0; i < T; i++)
    {
        int x,y,z=0;
        cin>>x>>y;

        if(y>x){
         z=2*(y-x);
         cout<<(z+x)<<endl;
        }
       else{
            cout<<y<<endl;
       } 
    }
    

    return 0;
}