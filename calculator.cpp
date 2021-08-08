/*Lecture 3.2.1: Switch Case Statement */
//Program to implement a simple calculator using switch statement.

#include<iostream>
using namespace std;

int main() {
    //Simple calculator like addition, subtraction, multiplication, division
    //  int num1, num2;
     float num1, num2;  //hum float bhi bana sakte hai taaki hum decimal number bhi print kar sake
     cout<<"Input Two Numbers: ";
     cin>>num1>>num2;

    //add a operator
    char opertr;
    cout<<"Enter the operator: ";
    cin>>opertr;

    switch (opertr)
    {
    case '+' :
        cout<<num1+num2<<endl;
        break;
     case '-' :
        cout<<num1-num2<<endl;
        break;
     case '*' :
        cout<<num1*num2<<endl;
        break;
     case '/' :
        cout<<num1/num2<<endl;
        break;
    
    default:
        cout<<"Enter Another Operator"<<endl;
        break;
    }

 return 0;
}

/* Output:
Input Two Numbers: 34 98
Enter the operator: *
3332

Input Two Numbers: 65 98
Enter the operator: /
0.663265

Input Two Numbers: 3253 6723
Enter the operator: +
9976

Input Two Numbers: 236  123 
Enter the operator: -
113

Input Two Numbers: 4242      
123
Enter the operator: %
Enter Another Operator
 */