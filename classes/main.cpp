#include <iostream>
#include <string>

using namespace std;

class SalesScore
{
  public:void bootSystem(string storeTitle)
  {
    cout << "Sales score!\n " << storeTitle << endl;
  }
};

int main()
{
   string storeTitle;
   SalesScore salesScore;

   cout << "Insert the name's store: " << endl;
   getline(cin, storeTitle); 
   cout << endl;

   salesScore.bootSystem(storeTitle);

   return 0;
}



