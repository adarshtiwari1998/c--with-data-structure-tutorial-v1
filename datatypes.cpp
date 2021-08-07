//Data types and Type Modifiers

#include <iostream>
using namespace std;

int main() {
   
  int a; //declaration
  a = 12; //initialisations

  cout<< "Size of Int " <<sizeof(a) << endl;
   
   float b;
   cout<< "Size of Float " <<sizeof(b) << endl;

   char c;
   cout<< "Size of Character " <<sizeof(c) << endl;

   bool d;
   cout<< "Size of Boolean " <<sizeof(d) << endl;

   short int si;
   long int li;

   cout<< "size of short Int " <<sizeof(si) << endl;
   cout<< "size of Long Int " <<sizeof(li) << endl;

return 0;
}

//output
/*
Size of Int 4
Size of Float 4
Size of Character 1
Size of Boolean 1
size of short Int 2
size of Long Int 4
*/