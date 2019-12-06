#include <iostream>
#include <vector>
#include "reg.h"
//#include "hero.h"
#include <fstream>
#include <string>
#include <sstream>

void readInFile(std::vector<hero>& lista) //läser in hela filen i en sträng
{
    std::ifstream inFile{"test.txt"};
    if(!inFile)
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    std::string line{};
    int count{};
    //std::vector<std::string> heroinfo{};
    while(!inFile.eof())
    {
        std::getline(inFile, line);
        std::stringstream ss;
        ss << line;
        //std::cout << line << std::endl;
        //line += "\n";
        //hero k{}line.split("\");
        //text.append(line);
        
        hero person{};
        int intrest{};
        ss >> person.name >> person.age >> person.gender >> person.weight >> person.hairColor >> person.race >> person.color;
        while(ss >> intrest)
        {
            person.hobby.push_back(intrest);
        }
        lista.push_back(person);
        
        count++;
    }
    std::cout << count << " rows" << std::endl;
    //inFile.close();
}

void writeToFile(std::vector<hero>& rego)
{
    std::ofstream ofs{"test.txt"};
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
        ofs << "\n";
    }
    ofs.close();
}