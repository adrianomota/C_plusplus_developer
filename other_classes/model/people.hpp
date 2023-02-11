#include <iostream>
#include <string>

using namespace std;

class People
{
   private: 
     string _firstName;
     string _lastName;

   public:
     People(string firstName, string lastName)
     {
        setFirstName(firstName);
        setLastName(lastName);
     }

     void setFirstName(string firstName)
     {
        _firstName = firstName;
     }

     void setLastName(string lastName)
     {
       _lastName = lastName;   
     }

     string getFirstname()
     {
       return _firstName;   
     }
    
     string getLastName()
     {
       return _lastName;
     }

     void ToString()
     {
        cout << "The people's first name is: " << getFirstname() << " and the people's last name is: " << getLastName() << "!" << endl;
     }
};
