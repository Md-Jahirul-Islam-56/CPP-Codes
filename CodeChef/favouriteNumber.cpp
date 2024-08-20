/*
Alice likes numbers which are even, and are a multiple of 7.
Bob likes numbers which are odd, and are a multiple of 9.
Alice, Bob, and Charlie find a number A. 
If Alice likes A, Alice takes home the number.
If Bob likes A, Bob takes home the number.
If both Alice and Bob don't like the number, Charlie takes it home.
Given A, find who takes it home.

Note: You can prove that there is no integer A such that both Alice and Bob like it
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
 int T;

    cin>>T;

    for (int i = 0; i < T; i++)
    {
        int A;
        cin>>A;

        if( A%2==0 && A%7==0){
                cout<<"Alice"<<endl;         
        }

         else if(A%2!=0 && A%9==0){
                cout<<"Bob"<<endl;         
        }
        else{
            cout<<"Charlie"<<endl;
        }
        
    }
    return 0;
}