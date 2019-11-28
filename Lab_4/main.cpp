#include <iostream>
#include "hero.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    hero adventurer{};
    vector<hero> rego = {};

    readInHero(adventurer, rego);
    for(int i=0; i < rego.size(); i++)
    {
        cout << rego[i].name << endl;
    }
    return 0;
}