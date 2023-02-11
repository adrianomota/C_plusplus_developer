#include <string>

using std::string;

class Person
{
   private: 
     string _firstName;
     string _lastName;

   public:
     Person(string firstName, string lastName);
     void setFirstName(string firstName);
     void setLastName(string lastName);
     string getFirstname();
     string getLastName();
     void ToString();
};
