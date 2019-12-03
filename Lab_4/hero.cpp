#include <iostream>
#include <vector>
#include "hero.h"

void readInHero(hero& person, std::vector<hero>& lista)
{
  std::cout << "Name(string): ";
    while(std::cin >> person.name)
    {
      std::cout << "Age(int): ";
      std::cin >> person.age;
      std::cout << "Gender(char): ";
      std::cin >> person.gender;
      std::cout << "Weight(int): ";
      std::cin >> person.weight;
      std::cout << "Hair Color(string): ";
      std::cin >> person.hairColor;
      lista.push_back(person);
    }
    //std::cout << person.kind << std::endl;
}

/*void printHero(hero& person, std::vector<hero>& lista)
{
    for(i=0; i < lista.length)
    {
        lista
    }
    std::cout << person.name << std::endl;
    std::cout << person.age << std::endl;
    std::cout << person.gender << std::endl;
    std::cout << person.weight << std::endl;
    std::cout << person.hairColor << std::endl;
}*/
