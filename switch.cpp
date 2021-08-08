/*Lecture 3.2: Switch Case Statement */
/* Program to implement multiple fruit item labeled, 
when user input number upon his/her choice */
#include <iostream>
using namespace std;

int main()
{

    char fruit;
    cout << "Input A Character: ";
    cin >> fruit;

    /*1. First way to do it using ifelseif condition */

    // if(fruit == 'a') {
    //     cout<<"Mango"<<endl;
    // } else if (fruit == 'b'){
    //       cout<<"Banana"<<endl;
    // } else if (fruit == 'c'){
    //     cout<<"Grapes" <<endl;
    // } else if (fruit == 'd') {
    //   cout<<"Orange" <<endl;
    // } else if (fruit == 'e') {
    //    cout<<"Gavava" <<endl;
    // } else {
    //   cout<<"I am still searching!!!" <<endl;
    // }

    /*2. Second way to do it using switch statement, isme hoga ki humko baar baar apne fruit ko different values
 se compare nhi karna hoga, switch automatically fruit ko different values se compare kar dega and uske corressponding
 jo bhi code hoga usko execute kar dega
 */
    switch (fruit) //yaha pe mention karna hoga kis variable ko compare karna hai
    {

    case 'a':
        cout << "Mango" << endl;
        /* hum break isliye use karte hai, ki aik case value ki 
        statement execute hone ke baad hum switch se bahar aajaye.*/
        break;

    case 'b':
        cout << "Banana" << endl;
        break;

    case 'c':
        cout << "Grapes" << endl;
        break;

    case 'd':
        cout << "Orange" << endl;
        break;

    case 'e':
        cout << "Gavava" << endl;
        break;

    default:
        /* agar variable ki value kisi bhi cases se match nhi hota ,
       too default ke corrosponding ke jo bhi statement hai usko execute kar dega.
      statement */
        cout << "I am still searching!!" << endl;
        break;
    }

    return 0;
}

/* Output:
Input A Character: b
Banana

Input A Character: d
Orange

Input A Character: f
I am still searching!!!

 */