//Lecture 2.4.1: While Loops in C++ 
//Program to check the number given by user is negative or not using dowhile condition. 

#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
     
     do {
      cout<<n<<endl;
      cin>>n;
     } while(n>0);

    return 0;
}

/* Output:
-89  user input (-ve number) 
-89  print number as user given
  8  user input (+ve number) 
  8  print number as user given
-78  user input (-ve number) 
         loop break/ terminated
 */
