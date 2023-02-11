#include "model/person.cpp"

int main() 
{
  Person person_one("Miguel de lima araujo guedes", "Mota");
  person_one.ToString();

  Person person_two("Adriano de lima araujo garcia", "Mota");
  person_two.ToString();

  Person person_three("Gleyce gonçalves de melo fagundes", "Mota");
  person_three.ToString();

  return 0;
}
