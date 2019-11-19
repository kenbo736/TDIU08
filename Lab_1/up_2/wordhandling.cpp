#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int count_words(string a, int numWords);

int main()
{
    string a{"Hello"};
    int numWords{};
    cout << "test" << endl;
    cin >> a;
    count_words(a, numWords);
    cout << "\n" << "Texten innehöll: " << a.length() << endl;
    return 0;
}

int count_words(string a, int numWords)
{
    while(a != "\n"){
        break;
    }
}