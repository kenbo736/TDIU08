#include <iostream>
#include <vector>
#include "reg.h"
#include <fstream>
#include <string>
#include <sstream>

void readInFile(std::vector<hero>& lista) //läser in registret, därefter tar den rad för rad som den hanterar med hjälp av stringstream och stoppar in den i en vector som innehåller alla hjältar
{
    std::ifstream inFile{"test.txt"};
    if(!inFile)
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    std::string line{};
    while(!inFile.eof()) //medan filen inte är "end of file"
    {
        std::getline(inFile, line);
        std::stringstream ss;
        ss << line;

        hero person{};
        int intrest{};
        ss >> person.name >> person.age >> person.gender >> person.weight >> person.hairColor >> person.race >> person.color;
        while(ss >> intrest)
        {
            person.hobby.push_back(intrest);
        }
        lista.push_back(person);
    }
}

void writeToFile(std::vector<hero>& rego, std::string filename) //skriver till en fil med hjälp av vektorn som innehåller alla hjältar
{
    std::ofstream ofs{filename};
    if(!ofs)
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    for(int i=0; i<rego.size(); i++) //läser in hero register i en fil som ligger i en vektor
    {
        ofs << rego[i].name << "     " << rego[i].age << "     " << rego[i].gender << "    " << rego[i].weight << "     " << rego[i].hairColor << "     " << rego[i].race << "  " << rego[i].color << "     ";
        for(int j=0; j<rego[i].hobby.size(); j++)
        {
            ofs << rego[i].hobby[j] << " ";
        }
        if(!(i == rego.size()-1))
        {
            ofs << "\n";
        }

    }
    ofs.close();
}
