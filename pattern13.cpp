/*Lecture 4.2.5: Advanced Pattern Question-13 */
// Star Pattern Question
/*

Suppose n=6,
                           *                  1      odd number in star: 1
                         * * *                2                          3
                       * * * * *              3                          5
                     * * * * * * *            4                          7
                     * * * * * * *            4                          7
                       * * * * *              3                          5
                         * * *                2                          3
                           *                  1                          1
//Fist Part
Row: 1 to n;
column: Two parts of column
1. For space:   (1 to n-Row No ) 
2. For *:     yaha star odd number me print ho he hai so formula is: 1 to 2*Row-No -1 , and
 
 2*1 -1= 1      for odd numbers
 2*2 -1 = 3
 2*3 -1 = 5
 2*4  -1 = 7


 2*1 +1= 3
 2*2 +1 = 5
 2*3 +1 = 7
 2*4 +1 = 9


//Second Part inverted part

Row: n to 1;
column:
for space: same as first part
for star (*): 
 
2*4-1= 7
2*3-1= 5
2*2-1= 3
2*1-1 =1

*/                         


#include<iostream>
using namespace std;

int main() {

int num;
cout<<"Enter the No: ";
cin>>num;


//Rows
for(int i=1; i<=num; i++) {
    //column, for space
    for(int j=1; j<=num-i; j++) {
        cout<<"  ";
    }
    //for star
    for(int j=1; j<=2*i-1; j++) {
        cout<<"*"<<" ";
    }
    cout<<endl;
}
//Rows
for(int i=num; i>=1; i--) {   //> more than and equal to 1  and num se start hoga
    //column, for space
    for(int j=1; j<=num-i; j++) {
        cout<<"  ";
    }
    //for star
    for(int j=1; j<=2*i-1; j++) {
        cout<<"*"<<" ";
    }
    cout<<endl;
}

return 0;


}

/* Output:
Enter the No: 6
          * 
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
* * * * * * * * * * *
* * * * * * * * * * * 
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *


 */