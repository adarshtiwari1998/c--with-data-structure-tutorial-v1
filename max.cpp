//2.3.1: Find the maximum of three given numbers
#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    cin>>a>>b>>c;

    if(a>b) {
        if(a>c){
             //print a is our maximum number
            cout<<a<<endl;
        } else {
            //else print c, because c is maximum
            cout<<c<<endl;
        }
    } else {
        if(b>c) {
            //print b is our maximum number
            cout<<b<<endl;
        } else {
         //print c is our maximum number
            cout<<c<<endl;
        }
    }

    return 0;
}


/* Output: Enter No: 12 32 56
      Max:           56 */