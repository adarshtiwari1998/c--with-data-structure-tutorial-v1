//2.3.2: Find the Given Numbers is Odd or Even

#include <iostream>
using namespace std;

int main() {
   
   int n;
   cin>>n;
   /* kya n ko divide karke 2 se, remainder 0 aa rha hai, too voo even ho jayega */
   //if statement applied
   if(n%2==0) {
      cout<<"This Number is Even Number"<<endl;
   } else {
       //aur jab divide karne pe 0 nhi aata hai too hamara number odd hai
       cout<<"This Numebr is Odd Number"<<endl;
   }


return 0;
}


/* Output:
43
This Numebr is Odd Number
50
This Number is Even Number
 */