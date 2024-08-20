// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int num, denum, Result;

//     cout<<"Enter the numerator and denominator"<<endl;
//     cin>>num>>denum;

//     try
//     {
//         if(denum == 0){
//             throw denum;
//         }
//         else
//         {
//             Result= num/denum;
//              cout<<Result<<endl;
//         }
//     }
//     catch(int d)//we can use ... which means default.
//     {
//         cout<<"Your denominator is zero!!"<<endl;
//        // cout<<d;
//     }

//     // if (denum == 0)
//     // {
//     //     cout<<"error"<<endl;
//     // }
//     // else
//     // {
//     //     Result=num/denum;
//     //      cout<<Result<<endl;

//     // }
    
   

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int age;

//     cout<<"Enter your age: "<<endl;
//     cin>>age;

//     try
//     {
//         if (age>18)
//         {
//             cout<<"You are an adult."<<endl;
//         }
//         else
//         throw age;
        
//     }
//     catch(int a)
//     {
//        cout<<"You are under aged!!"<<endl<<"Your age is: "<<a<<endl;

//     }
    

//     return 0;
// }


// #include<bits/stdc++.h>
//  using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two integers: ";
//     cin >> a >> b;
//     try {
//         if (b == 0) {
//             string s="Division by zero is not allowed.";
//             throw s;
//         }
//         cout << "Result: " << a / b << endl;
//     }
//     catch (string &msg) {
//         cerr << msg << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    try {
        if (b == 0) {
            throw "Division by zero is not allowed.";
        }
        cout << "Result: " << a / b << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}





