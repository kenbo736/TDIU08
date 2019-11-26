#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>

using namespace std;

struct person
{
  string namn{};
  string efternamn{};
  string klubb{};
};

void inputPerson(person& oPerson, vector<person>& v);

int main()
{
  person oPerson = {};
  vector<person> v = {};
  random_device r;
  mt19937 c(r());
  cout << "Anmälning, mata in deltagare:" << endl;
  inputPerson(oPerson, v);
  shuffle(v.begin(), v.end(), c); //shufflar hela vektorn, c variabeln är randomized så kommer förändra hur allt kommer se ut

  cout << "Startlista: " << endl;
  cout << "Startnummer förnamn efternamn klubb" << endl;
  for(int i=0; i < v.size(); i++)
  {
    cout << i+1 << " " << v[i].namn << " " << v[i].efternamn << " " << v[i].klubb << endl;
  }
  //cout << v[0].namn << "  " << v[1].namn << endl;
  //cout << v.size() << endl;
  return 0;
}

void inputPerson(person& oPerson, vector<person>& v)
{
  while(cin >> oPerson.namn)
  {
    //cout << "Namn: " << oPerson.namn << endl;
    cin >> oPerson.efternamn;
    //cout << "Efternamn: " << oPerson.efternamn << endl;
    getline(cin, oPerson.klubb);
    //cout << "Klubb: " << oPerson.klubb << endl;
    v.push_back(oPerson);
  }
}
