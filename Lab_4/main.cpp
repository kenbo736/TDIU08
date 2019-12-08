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
  string wholeRegister{};
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
    readInFile(rego); // laddar in hela registret från .txt till vektorn
    readInHero(adventurer, rego);
    writeToFile(rego, r);
  }
  else if(options == 'B')
  {
    cout << "Mata in dina intressen: ";
    int intrest{};
    std::string buff{};
    while(std::cin >> buff)
    {
      if((buff.back() == '0') || v.size()>=10)
      {
        cout << "hello";
        break;
      }
      std::stringstream ss;
      ss << buff;
      while(ss >> intrest)
      {
        v.push_back(intrest);
      }
    }
    cout << v[0] << v[1] << endl;
    readInFile(rego);
    mitchMatch(v, rego, match);
    writeToFile(match, res);
    

  }
  return 0;
}