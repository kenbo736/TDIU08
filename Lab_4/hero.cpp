#include <iostream>
#include <vector>
#include "hero.h"
#include "reg.h"
#include <sstream>


std::istream& operator>>(std::istream& kin, art& ras)
{
  std::string val;
  kin >> val;

  if(val == "Human")
    {
      ras = Human;
    }
  
  else if (val == "Elf")
    {
      ras = Elf;
    }
  
  else if (val == "Orc")
    {
      ras = Orc;
    }
  
  else if (val == "Halfling")
    {
      ras = Halfling;
    }
  
  else if (val == "Ogre")
    {
      ras = Ogre;
    }
  else if (val == "Lizardman")
    {
      ras = Lizardman;
    }

  return kin;
}

std::istream& operator>>(std::istream& kin, eyeColor& color)
{
std::string val;
kin >> val;
 
  if(val == "Blue")
    {
      color = Blue;
    }
  
  else if (val == "Green")
    {
      color = Green;
    }
  
  else if (val == "Brown")
    {
      color = Brown;
    }
  
  else if (val == "Gray")
    {
      color = Yellow;
    }
  
  else if (val == "Red")
    {
      color = Black;
    }
  else if (val == "Crazy")
    {
      color = Crazy;
    }

  return kin;
}

void readInHero(hero& person, std::vector<hero>& lista)
{
  int intrest{};
  std::string buff{};
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
      std::cin >> person.race;
      std::cout << "Eye Color(eyeColor): ";
      std::cin >> person.color;
      std::cout << "Intressen(vector): ";
      std::stringstream ss;
      getline(std::cin, buff);
      ss << buff;
      while(ss >> intrest)
      {
	      person.hobby.push_back(intrest);
      }
      lista.push_back(person);
    }
}


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
