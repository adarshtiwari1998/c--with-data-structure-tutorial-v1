/*Lecture 4.1.4: Awesome Pattern Question-4  */
/* Half Pyramid After 180* degree Rotation pattern Question
Agar ye pattern question humko n=5 de rakha hai too usse hum kaise banayege pyramid
            * 
          * *
        * * *
      * * * *
    * * * * *
  * * * * * *
* * * * * * *

humko sabse pehle har row me space print karni hogi, then stat print hogya. 
  */

 #include<iostream>
 using namespace std;


 int main() {
     int num;
     cout<<"Enter Number Here: ";
     cin>>num;

     //row
     for(int i=1; i<=num; i++) {
         //for columns
         for(int j=1; j<=num; j++) {
             if(i<=num-j) {
                cout<<"  ";
             } else {
                 cout<<"* ";
             }
         }
         cout<<endl;
     }
 }

 /*Output:
            * 
          * *
        * * *
      * * * *
    * * * * *
  * * * * * *
* * * * * * *
 
 */