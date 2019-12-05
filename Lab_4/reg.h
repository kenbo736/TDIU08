#ifndef REG_H
#define REG_H
#include <iostream>
#include <vector>
#include <fstream>
#include "hero.h"

struct registeredHero
{
    std::vector<int> v{};
};

void readInFile();
void readToFile(std::vector<hero>& rego);

#endif