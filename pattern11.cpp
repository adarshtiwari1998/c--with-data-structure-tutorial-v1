/*Lecture 4.2.3: Advanced Pattern Question-11 */
// Number Pattern Question
/*

Suppose n=6,

      1 
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
1 2 3 4 5 6

Row: 1 to n;
columns: 
For space: " " 1 to n- Row_No;
for number: 1 to Row No 

*/


#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the No: ";
    cin>>num;

    //rows
    for(int i=1; i<=num; i++) {
        //column, for space 
        for(int j=1; j<=num-i; j++) {
            cout<<" ";
        }
        //for Numbers
        for(int j=1; j<=i; j++) {
           cout<<j<< " ";
        }
        cout<<endl;
    }

    return 0;
}


/* Output:
Enter the No: 6
     1 
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
1 2 3 4 5 6


 */
