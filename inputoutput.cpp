//2.2: Input Output in C++

#include<iostream>
using namespace std;

int main() {

    // cout<<"Hello World";
    /* Suppose shivam ki mom usko shivam ko 20rs de rhi hai, and shivam ke father shivam ko 40 rs de the hai, 
    Too hame nikalna hai final amount kitna hai.
    */
    int amount1;  //variable amount1
    cin>>amount1;
   //extraction operator >> and << this is inseration operator

    int amount2;  //variable amount2
    cin>>amount2;  
    //total amount store in third variable sum and print and amount print on screen using cout
    int sum = amount1 + amount2;
    cout<<sum<<endl;  

    return 0;
}