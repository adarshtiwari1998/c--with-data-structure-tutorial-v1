/*Lecture 4.2.6: Advanced Pattern Question-14 */
// Zig Zag Pattern Question
/*

Suppose n=9,

                               
 1|   *     *                     (3,1)-->4,(2,2)-->4,(1,3)-->4
 2|  *  *  *  *                    (2,4)-->6,(3,5)-->8,(2,6)-->8
 3| *    *      *                  (1,7)-->8,(2,8)-->10, (3,9)-->12
  |_____________________
    1234 5  6 7 8 9


Rows: 1 to 3;
column: There are Three cases,
For star(*)--> (R+C)%4=0, too waha pe star(*) print karna hai
                R=2 & C%4=0 , too uss case me bhi print (*),
For space--> baaki jo bhi case hai usme print kar dena hai (" ")

*/                         


#include<iostream>
using namespace std;

int main() {
     int num;
     cout<<"Enter the number: ";
     cin>>num;

     //row
     for(int x=1; x<=3; x++) {//yaha pe jo rows hai voo fixed hai
      //column
      for(int y=1; y<=num; y++) {
        //conditions
        if(((x+y)%4==0) ||  (x==2  && y%4==0)) {
            cout<<"* ";
        } 
        else {
            cout<<"  ";
        }
      }
      cout<<endl;
      
     }

    return 0;
}

/*Output:
Enter the number: 9
    *       *     
  *   *   *   *
*       *       *


*/