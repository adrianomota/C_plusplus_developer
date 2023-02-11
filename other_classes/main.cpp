#include "model/person.cpp"

int main() 
{
  Person person_one("Miguel", "Mota");
  person_one.ToString();

  Person person_two("Adriano", "Mota");
  person_two.ToString();

  Person person_three("Gleyce", "Mota");
  person_three.ToString();

  return 0;
}
