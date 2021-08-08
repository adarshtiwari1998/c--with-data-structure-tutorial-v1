/*Lecture 4.1: Awesome Pattern Question-1  */
/* Question 1: Rectangle Pattern   ******** 
                                   ********
                                   ********
                                   ********
                                   ********
        Rows: 5
        column: 8

        for(int i=0; i<=rows; i++) {
            cout<<"*"<<endl;
        }

        How many times we have to write cout statement. So we are using nested for loop, 
 */
#include<iostream>
using namespace std;

int main() {
   int row, col;
   cout<<"Enter the Row: ";
   cin>>row;
   cout<<"Enter the Column: ";
   cin>>col;

   //add for loop here, jitna row user humko dia hai
   //for rows 
   for (int i=1; i<=row; i++) {
       //for column
       for(int j=1; j<=col; j++) {
           cout<<"*";
       }
       cout<<endl;
   }
   
 return 0;
}

/*Output:
*****
*****
*****
*****
*/



