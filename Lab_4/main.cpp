#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <cctype>
#include <fstream>
#include <sstream>
#include "hero.h"
#include "reg.h"

using namespace std;

int main()
{
  hero adventurer{};
  vector<hero> rego = {};
  vector<hero> match ={};
  char options{};
  vector<int> v = {};
  string r = "test.txt";
  string res = "RESULT.TXT";

  cout << "Välkommen till Hero Match­Maker 9999!" << endl;
  cout << "Välj ett alternativ:" << endl;
  cout << "A) Mata in en ny hjälte\nB) Hitta matchande hjältar" << endl;
  cout << "Välj ett alternativ: ";
  cin >> options;
  if(options == 'A')
  {
    readInFile(rego);
    readInHero(adventurer, rego);
    sort(rego.begin(), rego.end(), sortByAge);
    writeToFile(rego, r);

  }
  else if(options == 'B')
  {
    cout << "Mata in dina intressen(1-15): ";
    int intrest{};
    std::string buff{};
    int i=0;
    while(std::cin >> buff)
    {
      if(buff.back() == '0')
      {
        break;
      }
      std::stringstream ss;
      ss << buff;
      while(ss >> intrest)
      {
        if(intrest > 15) // Kollar om intresset du valt är större än 15
        {
          cout << "Intresset får inte vara högre än 15! " << endl;
          break;
        }
        else if(v.size()>9)
        {
          cout << "Du får inte ha fler än 10 intressen" << endl;
          break;
        }
        v.push_back(intrest);
      }
    }
    readInFile(rego);
    mitchMatch(v, rego, match);
    writeToFile(match, res);


  }
  return 0;
}
