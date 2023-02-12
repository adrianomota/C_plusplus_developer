#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  double  amount;
  double  contribution;
  double  interest_rate;
  int     number_of_years;

  cout << "Insert the value of contribution: ";
  cin  >> contribution;

  cout << "\nInsert number of year(s): ";
  cin >> number_of_years;

  cout << "\nInsert the interest rate per year %: ";
  cin >> interest_rate;

  cout << "Year" << setw(20) << "Deposit amount" << endl;
  cout << fixed << setprecision(2);

  for (int year = 1; year <= number_of_years; year++) {
    amount = contribution * pow(1.0 + (interest_rate /100), year);

    cout << setw(3) << year << setw(20) << amount << endl;
  }
  
  return 0;
}
