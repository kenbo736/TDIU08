#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <vector>

enum art{Human, Elf, Orc, Halfling, Ogre, Lizardman};
enum eyeColor{Blue, Green, Brown, Gray, Yellow, Red, Black, Crazy};

struct hero
{
  std::string name{};
  int age{};
  char gender{};
  int weight{};
  std::string hairColor{};
  art race{};
  eyeColor color{};
  std::vector<int> hobby{};
};

void readInHero(hero& person, std::vector<hero>& lista);
std::istream& operator>>(std::istream& kin, art& ras);

#endif
