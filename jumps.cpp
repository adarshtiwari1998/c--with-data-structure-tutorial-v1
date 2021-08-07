//Lecture 3.1: Jumps in Loops | Break and Continue Statement
/* To control the flow of loops on meeting some specified conditions  */
//Program to check girl shivani only go out on odd days for party. 
/*Program to check girl shivani have got pocket money every month, shivnai spend her pocket money 
every month to visit some places, and if shivani pocket money is not over so then shivani not go out anywhere.
So write a program for this 
 */

/*Continue statement use to skip to the next iternation of the loop  */
/* Break statement use to terminate the loop */

#include<iostream>
using namespace std;

int main() {
    
    //for loop integrated here
    /* Program 2 */
    int shivniPocketMoney = 3000;
    for(int date=1; date<=30; date++) {
        /* agar date jo hai voo even date ho means 12, 14, 16 too add continue statement.*/
        if(date%2==0) {
            continue;
         cout<<"Not going to party"<<endl; //ye statement execute nhi hoga
        }
        if(shivniPocketMoney==0) {
            break;
        }
        cout<<"Go Out Today for Party"<<endl;
        shivniPocketMoney= shivniPocketMoney-400;
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