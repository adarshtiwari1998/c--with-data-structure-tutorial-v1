/*Lecture 3.3: Operators in C++  */
//Pre and Post Incrementor example


#include<iostream>
using namespace std;

int main() {
/* ############################# OPERATOR 1. INCREMENT AND DECREMENT OPERATOR ########################### */
/*  Example : 1 */
int x = 1;
 //1  +  //3
x = x++ + ++x;

cout<<x<<endl;    //output: 4

/*  Example : 2 */

int i = 1;
int j = 3;
int sum;
     //1     //2      //1       //4         //3      //5
sum = i   +   j   +   i++  +    j++   +     ++i  +   ++j;

cout<<i<<" "<<j<<" "<<" "<<sum<<endl;   //output: 1=3 j=5 sum=16

/*  Example : 3 */
int k = 0;
     //0       //0        //1     //1 
k =  k++   -   --k   +   ++k  -   k--;
   //1                 
cout<<k<<endl;   //output: 0

/*  Example : 4 */

int m = 2;
int n = 4;
int o = 8;
int total;
           //2       //4        //8
total =    m--   -   n--    -   o--;

cout<<m<<endl;  //1
cout<<n<<endl;  //3
cout<<o<<endl;  //7
cout<<total<<endl;   //1 3 7 -10

/*  Example : 5 */
    int e = 20;
    int f = 30;
    int sum;
         //20   //19   //29  //30  //19  //30  //20  //29
    sum = e-- - e++ + --f - ++f + --e - f-- + ++e - f++;

    cout<<e<<endl;  //20
    cout<<f<<endl;   //30
    cout<<sum<<endl; //-20


/* ############################# OPERATOR 2. RELATIONAL OPERATOR ########################### */
/*  Example 1: == Equal Too  */
int a = 6;
int b= 6;
cout <<boolalpha;
cout << (a == b)<<endl;   //output: true, Gives true if both operands have equal value

/*  Example 2: != Not Equal Too  */
int x = 6;
int y= 5;
cout <<boolalpha;
cout << (x != y)<<endl;   //output: true, gives true if both operands are not equal

/*  Example 3: > Greater than  */
int m = 15;
int n = 12;
cout <<boolalpha;
cout << (m > n)<<endl;   //output: true , gives true if left operands is more than right operand


/*  Example 4: < Less than  */
int o = 14;
int p = 18;
cout <<boolalpha;
cout << (o < p)<<endl;   //output: true , gives true if left operands is less than right operand

/*  Example 5: >= Greater than and Equal To */

int e = 21;
int f = 13;
cout <<boolalpha;
cout << (e >= f)<<endl;   //output: true , gives true if left operands is more than or equal to right operand


int l = 21;
int m = 21;
cout <<boolalpha;
cout << (l >= m)<<endl;   //output: true , gives true if left operands is more than or equal to right operand

/*  Example 6: <= Less than and Equal To */

int q = 8;
int r = 13;
cout <<boolalpha;
cout << (q <= r)<<endl;   //output: true , gives true if left operands is less than or equal to right operand


int s = 8;
int t = 8;
cout <<boolalpha;
cout << (s <= t)<<endl;   //output: true , gives true if left operands is less than or equal to right operand

//Program to input a number n and tell whether it is equal to, less than or more than 10
 
 int num;
 cout<<"Enter A Number: ";
 cin>>num;

 if(num==10) {
     cout<<"This number are Equal to 10"<<endl;
 } 
 else if(num<10) {
   cout<<"This number Less than 10"<<endl;
 } 
 else if (num>10) {
   cout<<"This number Greater than 10"<<endl;
 } else {
     cout<<"Number Not Exist"<<endl;
 }

 
/*  Output:
Enter A Number: 1
This number Less than 10

Enter A Number: 12
This number Greater than 10

Enter A Number: 10
This number are Equal to 10
 */


/* ############################# OPERATOR 3. LOGICAL OPERATOR ########################### */

//LOGICAL OPERATOR : used to connect multiple conditions/ expressions together or to reverse logical value
/* 1. && operator: AND gives us true if both operand are true else false
  */

int u = 0;
int v = 23;
cout <<boolalpha;
cout << ((u == 0) && (u > v))<<endl;   //output: false , AND gives us true if both operand are true else false

int g = 32;
int h = 12;
cout <<boolalpha;
cout << ((g == 32) && (g > h))<<endl;   //output: true , && AND gives us true if both operand are true else false


/* 2. || operator: OR give us true if at least one of the operands are true */

int q = 65;
int r = 88;
cout <<boolalpha;
cout << ((q == 65) || (q > r))<<endl;   //output: true , || OR give us true if at least one of the operands are true


/* 3. ! operator: Not gives the opposite logical value of the operand.True becames false and false became true */

int w = 89;
int x = 89;
cout <<boolalpha;
cout << !(w == x)<<endl;   //output: false , ! Not gives the opposite logical value of the operand.True becames false and false became true


/* T-->1
   F--> 0
 */


//Write a program to output whether a number is divisible by both 2 and 3 or divisible by only one of them

int number;
cout<<"Enter The Number To Check: ";
cin>>number;

if(number%2 == 0 && number%3 == 0) {
    cout<<"Divisible by Both Numbers"<<endl;
} else if (number%2==0) {
    cout<<"Divisible by only 2"<<endl;
} else if (number%3==0) {
     cout<<"Divisible by only 3"<<endl;
}
 else {
    cout<<"Divisible by None"<<endl;
 }

/* Output:
Enter The Number To Check: 2
Divisible by only 2


Enter The Number To Check: 87
Divisible by only 3


Enter The Number To Check: 6
Divisible by Both Numbers

Enter The Number To Check: 78784654658445454544548787848455
Divisible by None
 */


/* ############################# OPERATOR 4. BITWISE OPERATOR ########################### */
//operate on bits and perform bit by bit operations

/*1. & AND OPERATOR 
     0101
  &  0110
    _____
     0100
*/


/* 2. | OR OPERATOR 
     0101
  |  0110
    _____
     0111
*/

/* 3. ^ XOR OPERATOR 
     0101
  ^  0110
    _____
     0011
*/

/* 4. ~ Ones complement OPERATOR 
   ~ 0101
    _____
     1010
*/


/* 5. << Left shift OPERATOR 
    4<<1
    (0100)  //4 ka binary number
    =1000    //Ans 8 in decimal


 formula:  a<<n -----> a*2^n
*/

/* 6. << Right shift OPERATOR 
    4>>1
    (0100)  //4 ka binary number
    =0010   //Ans 2 in decimal

     formula:  a>>n -----> a/2^n
*/

/* ############################# OPERATOR 5. ASSIGNMENT OPERATOR ########################### */
/* = , Assign value of right operand to left operand  */
   int i = 3;
   int j;
   j = i;
   cout<<j;   //output: 3

/* += , Assign sum of two operands to left operand  */
   int x = 6323;
   int j = 323;
   x+=j;  //short form of a=a+b
   cout<<x;   //output: 6646

/* -= , Assign difference of two operands to left operand  */
   int a = 76;
   int b = 34;
   int result;
   result = a-=b;  //short form of a=a-b
   cout<<result;   //output: 42

/* *= , Assign product of two operands to left operand  */
   cout<<"Assignment Operators Example of *= operand"<<endl;
   int m;
   cout<<"Enter the First Value: ";
   cin>>m;
   int n;
   cout<<"Enter the Second Value: ";
   cin>>n;
   int sum;
   sum = m*=n;  //short form of a=a*b
   cout<<sum;  

/*Output:
Enter the First Value:
12
Enter the Second Value: 
32
384
   */

/* /= , Assign the quotient of two operands to left operand  */
   cout<<"Assignment Operators Example of /= operand"<<endl;
   float s;
   cout<<"Enter the First Value: ";
   cin>>s;
   float t;
   cout<<"Enter the Second Value: ";
   cin>>t;
   t= s/=t;  //short form of a=a/b
   cout<<t;  

/*
Enter the First Value: 43
Enter the Second Value: 8
5.375
  */


/* ############################# OPERATOR 6. MISCELLANEOUS OPERATOR ########################### */
/* 1. sizeof() operator return the size of variable */
int x;
cout<<sizeof(x);    //output: 4

/* 2. condition?a:b operator/ternary operator return the value of a if condition is true or else value of b */
   int a;
   cout<<"Enter the First Value: ";
   cin>>a;
   int b;
   cout<<"Enter the Second  Value: ";
   cin>>b;
   int c;
   if(c= a>b? a-b: b-a) {
     cout << "Value of c is " << c << endl;
   }

   /* Output:
Enter the First Value: 56
Enter the Second  Value: 76
Value of c is 20
    */

/* 3. cast operator, convert one data type to another data type*/
char ch = 'a';
cout<<int(ch);   //Output: 97, ye humko a ki ascii value de dega which is 97

/* 4. comma(,) operator, causes a sequence of operations to be performed */
/* isme kya hota hai ki jo last value hoti hai, ya fhir operations ki jo last value aati hai voo variable me assign 
ho jaati hai, below example me 12 a variable me assign ho jaayega.
*/
int a = (2,4,12);
cout<<a;    //output: 12


/* 5. & reference operator, return the address of the variable */
int x = 12;
cout<<&(x); //Output: 0x61ff0c, ye humko x variable ka memory location ka address return karega


/* 6. * pointer operator, pointer to a variable */
int m;
int *ptr;
int result;
 
m = 4000;

//take the address of m by using the pointer 
ptr = &m;

// take the result available at ptr
result = *ptr;

cout << "Value of M is : " << m << endl;     //output: 4000
cout << "Value of ptr is : " << ptr << endl;   //output: Value of ptr :0x61ff08
cout << "Value of Result is: " << result << endl; //output: 4000

/* Final Output:
Value of M is : 4000
Value of ptr is : 0x61ff04
Value of Result is: 4000
*/

return 0;   
}







