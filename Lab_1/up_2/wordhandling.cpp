#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void count_words(string a, int& numWords);
void shortest_word(string a);

int main()
{
    string a{};
    int numWords{};
    cout << "test" << endl;
    getline(cin, a);

    count_words(a, numWords);
    cout << "\n" << "Texten innehöll: " << numWords << " ord." << endl;

    shortest_word(a);
    return 0;
}

void count_words(string a, int& numWords)
{
    for(int i = 0; a[i]; i++)
    {
        if (a[i] == ' ')
        {
            
            numWords++;
        }
    }
    numWords++;
}

void shortest_word(string a)
{
    for(int i = 0; a[i]; i++)
    {
        if (a[i-1] == ' ')
        {
            cout << a.substr(i) << endl;
        }
    }
}