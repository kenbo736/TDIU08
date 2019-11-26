#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

void count_words(string a, int& numWords, int& sum);
void shortest_word(string a, string& shortWord);
void longest_word(string a, string& longWord);

int main()
{
    string a{};
    string shortWord{"aaaaaaaaaaaaaaaa"};
    string longWord{};
    int numWords{};
    int sum{};

    cout << "Mata in texten: ";
    while(getline(cin, a))
    {
      if( a.length() == 0)
    	{
    	  cout << "Skriv något! ";
    	}
      count_words(a, numWords, sum);
      //cout << "\n" << "Texten innehöll: " << numWords << " ord." << endl;
      shortest_word(a, shortWord);
      //cout << "Det kortaste ordet var '"<< shortWord << "' med " << shortWord.length() << " bokstäver." << endl;
      longest_word(a, longWord);
      //cout << "Det längsta ordet var '"<< longWord << "' med " << longWord.length() << " bokstäver." << endl;
      //cout << "Medelordetslängd var " << sum/numWords << " bokstäver." << endl;

    }
    cout << "\n" << "Texten innehöll: " << numWords << " ord." << endl;
    cout << "Det kortaste ordet var '"<< shortWord << "' med " << shortWord.length() << " bokstäver." << endl;
    cout << "Det längsta ordet var '"<< longWord << "' med " << longWord.length() << " bokstäver." << endl;
    cout << "Medelordetslängd var " << sum/numWords << " bokstäver." << endl;
    return 0;
}

void count_words(string a, int& numWords, int& sum)
{

  int pos{};
  for(int i = 0; i <= a.length(); i++)
  {
      //cout << a[i] << endl;
      if(a[i] == ' ' || i == a.length())
      {
  	  //cout << "HEJ" << endl;
  	  pos = i-pos;
  	  sum = sum + pos;
  	  pos = i+1;

  	  numWords++;
      }
  }
}

void shortest_word(string a, string& shortWord)
{
    int wPos{};
    string tempWord{};
    for(int i = 0; i <= a.length(); i++)
    {
        if(a[i] == ' ' || i == a.length())
        {
            tempWord = a.substr(wPos, i-wPos);
            //cout << wPos << " " << i << " ord: " << tempWord << endl;
            //cout << i-wPos << " ord: " << tempWord << endl;
            if(tempWord.length() < shortWord.length())
            {
                shortWord = tempWord;
            }
            wPos = i+1;

        }
    }
}

void longest_word(string a, string& longWord)
{
    int wPos{};
    string tempWord{};
    for(int i = 0; i <= a.length(); i++)
    {
        if(a[i] == ' ' || i == a.length())
        {

            tempWord = a.substr(wPos, i-wPos);
            //cout << wPos << " " << i << " ord: " << tempWord << endl;
            if(tempWord.length() > longWord.length())
            {
                longWord = tempWord;
            }
            wPos = i+1;

        }
    }
}
