#include <iostream>
#include <vector>
#include "hero.h"

void readInHero(hero& person, std::vector<hero>& lista)
{
    while(std::cin >> person.name)
    {
        std::cin >> person.age;
        std::cin >> person.gender;
        std::cin >> person.weight;
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
