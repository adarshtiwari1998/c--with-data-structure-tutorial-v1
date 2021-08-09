/*Lecture 4.2.1: Advanced Pattern Question-9  */
//0-1 Pattern Question
/*

Suppose n=6,

 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
 0 1 0 1 0 1

Rows--> 1 to n;
Columns--> 1 to Row no
Elements: kaha pe 0 print karna hai and kaha pe 1 uske liye humko element ka indexing dekhna 
padega 
       (1,1)
       (2,1) (2,2) 
       (3,1) (3,2) (3,3)
       (4,1) (4,2) (4,3) (4,4)
       (5,1) (5,2) (5,3) (5,4) (5,5)


jab mera (Row No + Col No) Even + 1 number ban rha hai too i will print 1 and then jab voo odd
number ban rha hai too i will be print 0
*/

#include<iostream>
using namespace std;


int main() {
    
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    //row 
    for(int x=1; x<=num; x++) {
    //column
     for(int y=1; y<=x; y++) {
      //ab hum compare karege row no and column no ko
      if((x+y)%2==0) {
         //too voo number aik even number hai too uss case me mai print karna hoga 1 ko
         cout<<" 1";
      }else {
          cout<<" 0";
     }
    }
  cout<<endl;
}

    return 0;
}

/* Output:
Enter the Number: 6
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
 0 1 0 1 0 1


*/