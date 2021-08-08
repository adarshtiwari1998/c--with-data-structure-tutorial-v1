/*Lecture 4.2: Advanced Pattern Question-8  */
//Inverted Pattern Question
/*
n=6

1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

Rows--> 1 to n;
Columns--> 1 to n + 1 - Row no (5+1 = 6 - Row No(1) = 5)
                               (5+1 = 6 - Row No(2) = 4)
                               (5+1 = 6 - Row No(3) = 3)  and so on
Elements: Print Column No
*/

#include<iostream>
using namespace std;

int main() {
 
 int num;
 cout<<"Enter the Number below: ";
 cin>>num;
  
  //nested loops
  //for rows
  for(int x=1; x<=num; x++) {
      //columns
      for(int y=1; y<=num+1-x; y++) {
       cout<<y<<" ";
      }
      cout<<endl;  //line break
  }

return 0;
}

/* Output
Enter the Number below: 6
1 2 3 4 5 6 
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


*/