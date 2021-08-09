/*Lecture 4.2.2: Advanced Pattern Question-10 */
//Rhombus Pattern Question 
/*

Suppose n=6,

              ******
             ******
            ******
           ******
          ******
         ******

Rows: 1 to n;
column: isme humko kuch space add karna hoga then hum start print karege, too hum har row ke liye 2 for loop
lagaye ge column me.
first column --> space " "    1 to n - Row_No    " " space print karna hai 
second column--> start *      1 to n

*/

#include<iostream>
using namespace std;

int main() {
 
 int num;
 cout<<"Enter the Number: ";
 cin>>num;

 //row
 for(int i=1; i<=num; i++) {
   //column, loop for space
   for(int j=1; j<=num-i; j++) {
       cout<<" ";
   }
   for(int j=1; j<=num; j++) {
       cout<<"*";
   }
  cout<<endl;
 }

 return 0;
}