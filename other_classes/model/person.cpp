#include "iostream"
#include "string"
#include "person.hpp"

using namespace std;

Person::Person(string firstName, string lastName)
{
  setFirstName(firstName);
  setLastName(lastName);
}

void Person::setFirstName(string firstName)
{
   _firstName = firstName;
}

void Person::setLastName(string lastName)
{
   _lastName = lastName;   
}

string Person::getFirstname()
{
  return _firstName;   
}
    
string Person::getLastName()
{
  return _lastName;
}

void Person::ToString()
{
  cout << "The people's first name is: " << getFirstname() << " and the people's last name is: " << getLastName() << "!" << endl;
}

