//Lecture 2.4: Loops in C++ 
//Program to find the sum of n numbers, given by user.
#include <iostream>
using namespace std;


int main() {
     
     int n;
     cin>>n;

    int sum = 0;
      for(int counter=1; counter<=n; counter++) {
       //ye loop tab tak chalega jab tak hamara counter n+1 nhi ho jaata
        sum= sum + counter;
      }

      cout<<sum<<endl;
    return 0;
}


/*Output:
Enter Number: 10
1+2+3+4+5+6+7+8+9+10 = 55 
*/