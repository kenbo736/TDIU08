#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <cctype>
#include <fstream>
#include "hero.h"
#include "reg.h"

using namespace std;

int main()
{
  hero adventurer{};
  vector<hero> rego = {};
  char options{};
  string wholeRegister{};


  cout << "Välkommen till Hero Match­Maker 9999!" << endl;
  cout << "Välj ett alternativ:" << endl;
  cout << "A) Mata in en ny hjälte\nB) Hitta matchande hjältar" << endl;
  cout << "Välj ett alternativ: ";
  cin >> options;
  if(options == 'A')
  {
    readInFile(rego); // laddar in hela registret från .txt till vektorn
    readInHero(adventurer, rego);
    writeToFile(rego);
  }
  else if(options == 'B')
  {
    cout << "Mata in dina intressen: ";
    
      //getline(cin, hobby);
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