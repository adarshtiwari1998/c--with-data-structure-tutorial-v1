/*Lecture 3.1.3: Jumbs in Loops | Print all prime numbers between a and b */

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    /* we use nested for loops here, because first for loop check karega ki voo number prime ha yaa nhi,
     and second for loop chalega from all numebers a to b, bahar wala loop print karega a to b
     and andar wala loop check karega ki voo prime hai yaa nhi
     */
    for (int allnum = a; allnum <= b; allnum++)
    { //print karega 2 number ke beech ka prime
        int i;
        for (i = 2; i < allnum; i++)
        {
            if (allnum % i == 0)
            {
                /*means ki voo number non prime hai too humko usko print karne ki jarurat nhi hai,
            we need to skip  to the next number, with help of break statement, break statement se
            hum andar wale for loop se bahar aa jayege, but hum bahar wale for loop ke andar rahege.
             */
                break;
            }
        }
        if (i == allnum)
        {
            cout << allnum << endl;
        }
    }

    return 0;
}

/*Output:
10 20
11
13
17
19
 */
