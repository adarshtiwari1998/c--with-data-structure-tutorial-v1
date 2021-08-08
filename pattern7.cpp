/*Lecture 4.1.7: Awesome Pattern Question-7  */
/*Butterfly Pattern Question 
*                         * 
* *                     * * 
* * *                 * * * 
* * * *             * * * * 
* * * * *         * * * * * 
* * * * * *     * * * * * * 
* * * * * * * * * * * * * * 
* * * * * * * * * * * * * *
* * * * * *     * * * * * * 
* * * * *         * * * * *
* * * *             * * * *
* * *                 * * *
* *                     * * 
*                         *

 n= 7;
 Rows;( 1 to n);
 start *:Row No. , mere star jo hoge voo equal hoge mere row no ke
 spacing: 1st row--> 6spaces, 2nd row--> 4 spaces then 2 then 0, so ye, (2*n-2*Row No)

 Then 2nd part ke liye row wala part chalega (n to 1)
  */

 #include<iostream>
 using namespace std;

 int main() {
    
    int num;
    cout<<"Enter the No: ";
    cin>>num;
    /*First Part of Butterfly Pattern Section */
    //row
    for(int i=1; i<=num; i++) {
        //column
        for(int j=1; j<=i; j++) {
            cout<<"* ";
        }
        //space part
        int spaceSec = 2*num - 2*i;
        //column
        for(int j=1; j<=spaceSec; j++) {
            cout<<"  ";
        }
        for(int j=1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    /*Second Part of Butterfly Pattern Section */
    //row
    for(int i=num; i>=1; i--) {
        //column
        for(int j=1; j<=i; j++) {
            cout<<"* ";
        }
        //space part
        int spaceSec = 2*num-2*i;
        //column
        for(int j=1; j<=spaceSec; j++) {
            cout<<"  ";
        }
        for(int j=1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

     return 0;
 }


 /*Output: 
 Enter the No: 7
*                         * 
* *                     * * 
* * *                 * * * 
* * * *             * * * * 
* * * * *         * * * * * 
* * * * * *     * * * * * * 
* * * * * * * * * * * * * * 
* * * * * * * * * * * * * *
* * * * * *     * * * * * * 
* * * * *         * * * * *
* * * *             * * * *
* * *                 * * *
* *                     * * 
*                         *
 
 
   */