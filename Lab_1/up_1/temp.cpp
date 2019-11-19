#include <iostream>
#include <iomanip>

using namespace std;

void tabell(int c, double k, double f, double r, int start, int end);

int main(){
  int c{};
  double k{};
  double f{};
  double r{};
  int start{};
  int end{};

  cout << "Ange startvärde: " << endl;
  cin >> start;
  cout << "Ange slutvärde: " << endl;
  cin >> end;
  while(start > end)
  { 
    cout << "Felaktigt slutvärde! " << endl;
    cout << "Ange slutvärde: " << endl;
    cin >> end;
  }

  tabell(c, k, f, r, start, end);
  return 0;
}

void tabell(int c, double k, double f, double r, int start, int end)
{
  cout << "Celsius     Kelvin  Farenheit   Réaumur" << endl;
  cout << "---------------------------------------" << endl;
  c = start;
  while(start < end){
    c = c+1;
    k = c + 273.15;
    f = (c * 1.8) + 32;
    r = c * 0.8;
    cout << fixed << setw(7) << c << setw(11) << setprecision(2) << k << setw(11) << setprecision(2) << f << setw(10) << setprecision(2) << r << endl;
    start++;
  }
}
