#include <iostream>
#include <iterator>
#include <ostream>
using namespace std;

int main()
{
  int first_number;
  int second_number;
  
  cout << "input the first number: ";
  cin >> first_number;

  cout << "input the second number: ";
  cin >> second_number;


  if(first_number > second_number)
    cout << "The first number is greather than second number" << endl;

  if(first_number == second_number)
    cout << "Both number is the same" << endl;
;

  if(first_number < second_number)
    cout << "The first_number is less tham second_number" << endl;

  cout << "The sum is: " << (first_number+second_number) << endl;
  cout << "The substraction is " << first_number - second_number << endl;
  cout << "The multipliation is " << (first_number*second_number) << endl;
  cout << "The divisio is : " << (second_number != 0 ? (first_number / second_number) : 0 ) << endl;
  cout << "The module is: " << ( second_number != 0 ? (first_number%second_number) : 0 ) << endl;
  return 0;
}
