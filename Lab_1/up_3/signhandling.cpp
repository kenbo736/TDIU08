#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;


int main()
{

  char c{};
  int space{}, alpha{}, digit{}, country{};
	
  cout << "\n";
  cout << "Skriv in text: ";

  while (cin.get(c))
    {
      if (isspace(c))
	{
	  ++space;
	}
      else if (isalpha(c))
	{
	  ++alpha;

	}
      else if (isdigit(c))
      {
	++digit;

      }
      country++;
    }

  cout << '\n';
  cout << "Alfabetiska tecken......: "  << alpha << endl;
  cout << "Siffertecken......: "  << digit << endl;
  cout << "Vita tecken......: "  << space << endl;
  cout << "Totalt......: "  << country << endl;
  return 0;
}

