
//2.3: Program to take input from user to go shopping with her friends depned on the how much saving we have?
#include <iostream>
using namespace std;

int main() {
      int savings;
      cin>>savings;
     
    //if condition
     if(savings>5000) {
         cout<<"RoadTrip with Nitesh\n"<<endl;
     } else {
         cout<<"Shopping with Nitesh"<<endl;
     }
      
    /*output: Inout Price:4000    
     Shopping with Nitesh
     */   

    //ifelseif
    int monthlySavings ;
    cin>>monthlySavings;

    if(monthlySavings>6000) {
        if(monthlySavings>10000) {
            cout<<"Valley Trip with Abhi";
        } else {
           cout<<"Local Tour with Abhi";
        }
       } 
    else if (monthlySavings>2000) {
        cout<<"Dinner With Aniket";
    } else {
        cout<<"Dinner with Sister";
    }
       
    return 0;
}