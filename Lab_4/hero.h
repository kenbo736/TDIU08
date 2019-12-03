#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <vector>

/*struct art
{
    std::vector<std::string> kind = {"Human", "Elf", "Orc", "Halfling", "Ogre", "Lizardman"};
};*/

/*struct eyeColor
{
    std::vector<string> eyes = {"Blue", "Green", "Brown", "Gray", "Yellow", "Red", "Black", "Crazy"};
};*/

struct hero
{
    std::string name{};
    int age{};
    char gender{};
    int weight{};
    std::string hairColor{};
  //std::vector<int> hobby{};
};

void readInHero(hero& person, std::vector<hero>& lista);

#endif
