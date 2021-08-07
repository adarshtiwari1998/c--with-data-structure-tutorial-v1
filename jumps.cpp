//Lecture 3.1: Jumps in Loops | Break and Continue Statement
/* To control the flow of loops on meeting some specified conditions  */
//Program to check girl shivani only go out on odd days for party. 

#include<iostream>
using namespace std;

int main() {
    
    //for loop integrated here
    for(int date=1; date<=30; date++) {
        /* agar date jo hai voo even date ho means 12, 14, 16 too add continue statement.*/
        if(date%2==0) {
            continue;
         cout<<"Not going to party"<<endl; //ye statement execute nhi hoga
        }
        cout<<"Go Out Today for Party"<<endl;
        /* ab humko condition lagani hai ki jis din bhi even day 
        ho uss din ye cout statement print naa ho, skip ho jaaye, too uske liye hum
        continue statement ka use karte hai. Continue statement helps to skip to
         the next iteration of the loops
        */

    }

    return 0;
}

/*Output: 15  times print

Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party
Go Out Today for Party



  */