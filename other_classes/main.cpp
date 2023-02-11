#include "model/people.hpp"

int main() 
{
  People people_one("Miguel", "Mota");
  people_one.ToString();

  People people_two("Adriano", "Mota");
  people_two.ToString();

  People people_three("Gleyce", "Mota");
  people_three.ToString();

  return 0;
}
