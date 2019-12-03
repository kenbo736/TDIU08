#include <iostream>
#include "hero.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
  hero adventurer{};
  vector<hero> rego = {};
  char options{};

  cout << "Välkommen till Hero Match­Maker 3000!" << endl;
  cout << "Välj ett alternativ:" << endl;
  cout << "A) Mata in en ny hjälte\nB) Hitta matchande hjältar" << endl;
  cout << "Välj ett alternativ: ";
  cin >> options;
  if (options == 'A')
  {
    readInHero(adventurer, rego); 
    for(int i=0; i < rego.size(); i++)
    {
      cout << rego[i].name << endl;
    }
    
  }
  else if (options == 'B')
  {
    cout << "Mata in dina intressen: ";
    //cin >> hobby;
  }
      
 
  return 0;
}
