//Lecture 2.4.1: While Loops in C++ 
//Program to check the number given by user is negative or not. 

#include<iostream>
using namespace std;


int main() {
     int n;
     cin>>n;

     while(n>0) { /* agar user negative number dia yaha pe too cout wali statement print nhi hogi,
     kyu I already mention in condition n>0 (number should be positive), and agar user negative value dala
     too ye condition false ho jayegi and hum loop se bahar aajayge.
      */
         cout<<n<<endl;
         cin>>n;
     } 

    return 0;
}

/*Output
10   user input (+ve numeber) 
10   print number as user given
12   user input (+ve number)
12   print number as user given
-78  user input(-ve number)
      loop terminated

*/