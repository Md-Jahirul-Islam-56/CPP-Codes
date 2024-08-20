/*
Given, 
A,B,and C as the sides of a triangle, find whether the triangle is scalene.

Note:
A triangle is said to be scalene if all three sides of the triangle are distinct. It is guaranteed that the sides represent a valid triangle.

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int T;

    cin>>T;

    for (int i = 0; i < T; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;

        if((x!=y) && (y!=z) && (z!=x)){
            cout<<"YES"<<endl;
        }
        else{
           cout<<"NO"<<endl; 
        }

    }

    return 0;
}