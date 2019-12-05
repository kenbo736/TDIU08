#include <iostream>
#include "hero.h"
#include "reg.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <cctype>
#include <fstream>

using namespace std;

int main()
{
  hero adventurer{};
  vector<hero> rego = {};
  char options{};

  cout << "Välkommen till Hero Match­Maker 3000!" << endl;
  cout << "Välj ett alternativ:" << endl;
  cout << "A) Mata in en ny hjälte\nB) Hitta matchande hjältar" << endl;
  cout << "C) register\nD) fyll på fil" << endl;
  cout << "Välj ett alternativ: ";
  cin >> options;
  if(options == 'A')
  {
    readInHero(adventurer, rego);
    readToFile(rego);
  }
  else if(options == 'B')
  {
    cout << "Mata in dina intressen: ";
      //getline(cin, hobby);
  }
  else if(options == 'C')
  {
    readInFile();
  }
  else if(options == 'D')
  {
    readToFile(rego);
  }
  return 0;
}

/*
  for(int i=0; i < rego.size(); i++)
	{
	  cout << rego[i].name;
	  cout << rego[i].age << endl;
	  for(int x=0; x < rego[i].hobby.size(); x++)
	  {
	    cout << rego[i].hobby[x] << endl;
	  }
  }
    */