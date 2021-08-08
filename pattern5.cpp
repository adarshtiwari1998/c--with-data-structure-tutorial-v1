/*Lecture 4.1.5: Awesome Pattern Question-5  */
/* Half Pyramid using Numbers pattern Question
Agar ye pattern question humko n=5 de rakha hai too usse hum kaise banayege pyramid
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5

Rows wala loop chalega 1 to n
col: 1 to rows No
and jo hi mera row number hai wahi me print kar rhe hai iss pattern me

  */

 #include<iostream>
 using namespace std;

 int main() {
   int num;
   cout<<"Enter the Number: ";
   cin>>num;

   //rows loop
   for(int m=1; m<=num; m++)  {
       //columns
       for(int n=1; n<=m; n++) {
        cout<<m<<" ";
       }
       cout<<endl;
   }
 
  return 0;
 }

 /* Output:
Enter the Number: 5
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
 
 */