/*Lecture 4.2.4: Advanced Pattern Question-12 */
// Palindromic Pattern Question
/*

Suppose n=6,
          1 
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4 
  5 4 3 2 1 2 3 4 5
6 5 4 3 2 1 2 3 4 5 6
               

Row: 1 to n;
columns: There is  3 part 
For space: " " 1 to n- Row_No;
for number in decresing order: variable k = row no k--   -->formula  (1 to n- Row_No) 
for number in incresing order   k=2; k++      -->formula    (n to+Row No -1)
*/


#include<iostream>

using namespace std;

int main() {
    int num;
    cout<<"Enter the No: ";
    cin>>num;
     
     //row
     for(int x=1; x<=num; x++) {
         int y;
         //column, for space
         for(y=1; y<=num-x; y++) {
             cout<<"  ";
         }
         //create a variable k and assign row to k variable
         int k=x;
          for(;y<=num; y++) {
        //decreasing order
             cout<<k--<<" ";
         }
         //increasing order
         k=2;
          for(; y<=num+x-1; y++) {
           cout<<k++<<" ";
          }
          cout<<endl;

     }

    return 0;
}

/* Output:
Enter the No: 6
          1 
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4 
  5 4 3 2 1 2 3 4 5
6 5 4 3 2 1 2 3 4 5 6


 */