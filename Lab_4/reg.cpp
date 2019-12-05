#include <iostream>
#include <vector>
#include "reg.h"
#include <fstream>
#include <string>
#include <sstream>
#include "hero.h"

void readInFile()
{
    std::ifstream inFile{"REGISTER.TXT"};
    if(!inFile)
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    std::string line{};
    int count{};
    while(!inFile.eof())
    {
        std::getline(inFile, line);
        std::cout << line << std::endl;

        count++;
    }
    std::cout << count << " rows" << std::endl;
    //inFile.close();
}

void readToFile(std::vector<hero>& rego)
{
    std::ofstream ofs{"test.txt"};
    if(!ofs)
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    ofs << rego[0].name << "     " << rego[0].age << "     " << rego[0].gender << "    " << rego[0].weight << "     " << rego[0].hairColor << "     " << rego[0].race << "  " << rego[0].color << "     ";
    ofs.close();
}