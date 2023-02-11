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
  if(firstName.length() <= 20)
    _firstName = firstName;
  
  if(firstName.length() >= 20)
  {
    _firstName = firstName.substr(0,20);
    cout << "A maximun of 20 characters are allowed!" << endl;
  }
}

void Person::setLastName(string lastName)
{
  if(lastName.length() <= 20)
    _lastName = lastName;   

  if(lastName.length() >= 20)
  {
    _lastName = lastName.substr(0,20);   
    cout << "A maximun of 20 characters are allowed!" << endl;
  }
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

