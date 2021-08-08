/*Lecture 4.1.3: Awesome Pattern Question-3  */
/*  Inverted Half Pyramid Question
Agar ye pattern question humko n=5 de rakha hai too usse hum kaise banayege pyramid
      *****
      ****
      ***
      **
      *
jitna mera row number hai utne hi star hum print kar rhe hoge
  */

 #include <iostream> 
 using namespace std;

 int main() {
    
    int num;
    cout<<"Enter Your Number here for Half Pyramid Pattern: ";
    cin>>num;
    //for rows
    for(int x=num; x>=1; x--) {
        //for columns
        for (int y=1; y<=x; y++) {
            cout<<"*";
        }
        cout<<endl;  //line break
    }


     return 0;
 }

 /*Output:
Enter Your Number here for Half Pyramid Pattern: 7
*******
****** 
*****  
****
***
**
*
  */

