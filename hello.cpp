//1: Hello C program

#include <iostream>
//standard namespace assign globally to avoid writing std::
using namespace std;

int main()
{
  std::cout<<"Hello World\n";
  cout<<"Hello World\n";
  //example: suppose rahul mom and father give money to rahul so find the total amount of rahul get

  int amount1;
  cin >> amount1;

  int amount2;
  cin >> amount2;

  int sum = amount1 + amount2;
  cout << sum << endl;

  return 0;
}