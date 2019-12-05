#include <iostream>
#include <vector>
#include "reg.h"
#include <fstream>
#include <string>
#include <sstream>

void readInFile(std::string & text)
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
        //std::cout << line << std::endl;
        line += "\n";
        text.append(line);
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
    for(int i=0; i<rego.size(); i++) //läser in hero register i en fil som ligger i en vektor
    {
        ofs << rego[i].name << "     " << rego[i].age << "     " << rego[i].gender << "    " << rego[i].weight << "     " << rego[i].hairColor << "     " << rego[i].race << "  " << rego[i].color << "     ";
        for(int j=0; j<rego[i].hobby.size(); j++)
        {
            ofs << rego[i].hobby[j] << " ";
        }
    }
    ofs.close();
}