#include <iostream>
#include <vector>
#include "hero.h"

std::istream& operator>>(std::istream& kin, hero& kind);
{
  string val;
  kin >> val;
  switch(val)
  {
    case("Human"){
      kind.a = Human;
      break;
    }
  }
  return kin;
}

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
      std::cout << "Race(art): ";
      std::istream& operator>>(std::istream& kin, hero& kind);
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

/*
    switch(person.a)
    {
        case Human    : std::cout << "Human\n";    break;
        case Elf      : std::cout << "Elf\n";      break;
        case Orc      : std::cout << "Orc\n";      break;
        case Halfling : std::cout << "Halfling\n"; break;
        case Ogre     : std::cout << "Ogre\n";     break;
        case Lizardman: std::cout << "Lizardman\n";break;
    }
*/