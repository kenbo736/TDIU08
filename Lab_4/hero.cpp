#include <iostream>
#include <vector>
#include "hero.h"
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

std::ostream& operator<<(std::ostream& kout, art& ras)
{
  
  switch(ras)
  {
    case Human    : kout << "Human";    break;
    case Elf      : kout << "Elf";      break;
    case Orc      : kout << "Orc";      break;
    case Halfling : kout << "Halfling"; break;
    case Ogre     : kout << "Ogre";     break;
    case Lizardman: kout << "Lizardman";break;
  }
  return kout;
}

std::ostream& operator<<(std::ostream& kout, eyeColor& color)
{

  switch(color)
  {
    case Blue   : kout << "Blue";   break;
    case Green  : kout << "Green";  break;
    case Brown  : kout << "Brown";  break;
    case Gray   : kout << "Gray";   break;
    case Yellow : kout << "Yellow"; break;
    case Black  : kout << "Black";  break;
    case Crazy  : kout << "Crazy";  break;
  }
  return kout;
}

void readInHero(hero& person, std::vector<hero>& lista)
{
  std::cout << "Name(string): ";
  std::cin >> person.name;
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
      int intrest{};
      std::string buff{};
      while(std::cin >> buff)
      {
        std::stringstream ss;
        ss << buff;
        while(ss >> intrest)
        {
          person.hobby.push_back(intrest);
        }
      }
      
      lista.push_back(person);
}

void mitchMatch(std::vector<int>& v, std::vector<hero>& rego, std::vector<hero>& match)
{
  int count{};
  int countSame{};
  /*for(int i=0; i<v.size(); i++)
  {
    for(int j=0; j<rego.size(); j++)
    {
      //count = 0;
      for(int x=0; x<rego[j].hobby.size(); x++)
      {
        if(v[i] == rego[j].hobby[x])
        {
          count++;
          std::cout << "Match! " << count << std::endl;
        } 
      }
    }
  }*/
  for(int j=0; j<rego.size(); j++)
  {
    count = 0;
    for(int x=0; x<rego[j].hobby.size(); x++)
    {
      for(int i=0; i<v.size(); i++)
      {
        if(v[i] == rego[j].hobby[x])
        {
          count++;
        }
      }
    }
    if(count > 0)
    {
      match.push_back(rego[j]);
      std::cout << "Match! " << count << std::endl;
    }
  }
}