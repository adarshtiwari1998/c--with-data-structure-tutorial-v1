/*Lecture 4.1.2: Awesome Pattern Question-2  */
/*  Hollow Rectangle Pattern Question
*****
*   *
*   *
*   *
*   *
*****
  */
 
 #include<iostream>
 using namespace std;

 int main() {
    int row, col;
    cout<<"Enter the Row No: ";
    cin>>row;
    cout<<"Enter the Col No: ";
    cin>>col;
    
    //for loop here
    for(int i = 1; i<=row; i++) {
        //column
        for(int j = 1; j<=col; j++) {
           if(i==1 || i==row || j==1 || j==col) {
               cout<<"*";
           }
           else {
               cout<<" ";
           }
        }
        cout<<endl;  //line break
    }
 
     return 0;
 }

 /* Output:
********
*      *
*      *
*      *
*      *
*      *
********
 
  */