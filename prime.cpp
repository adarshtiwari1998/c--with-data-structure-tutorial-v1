/*Lecture 3.1.2:  Jumbs in Loops | Check if a given number is prime or not */
//Factors of Prime Number: Prime number ke two factors hote hai aik vo khud and second 1
/*hum check karne ke liye ki koi numbers prime hai ki nhi hum usse 
divide karke dekhte hai x=1,2,3,4,5....n-1, and if any number is divisible by any x numbers-> so 
that number is non prime number*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int x;
    //add we add a loop jo ki hum 2 se start karege kyu ki 1 sabki divide karta hai
    for (x = 2; x < n; x++)
    {
        //this loop will iterate till n-1
        if (n % x == 0)
        {
            cout << "This number is Not Prime Number!!" << endl;
            //ab humko aage wale number se divide karne ki jarurat nhi hai so we are using break statement
            break;
        }
    }
    if (x == n)
    {
        cout << "This number is Prime Number" << endl;
    }

    return 0;
}

/*output:
7
This number is Prime Number
87
This number is Not Prime Number!!
*/
