/*Lecture 4.1.6: Awesome Pattern Question-6  */
/* Floyd's Traingle Pattern Question  
(if user given n=5)
1  
2  3
4  5  6
7  8  9  10
11  12  13  14  15

yaha pe hum row number ke jagah print kar rhe hai kuch number jo ki barata jaa rha hai,
hum isme aik vaiable lege count = 1 and har baar uako increment kar dege

  */

#include<iostream>
using namespace std;

int main() {
     int num;
     cout<<"Enter the Number: ";
     cin>>num;
      int count = 1;
     //row
     for(int i=1; i<=num; i++) {
         //column
         for(int j=1; j<=i; j++) {
            cout<<count<<"  ";
            count++;
         }
         cout<<endl;
     }

    return 0;
}

/*Output: 
Enter the Number: 5
1  
2  3
4  5  6
7  8  9  10
11  12  13  14  15

*/