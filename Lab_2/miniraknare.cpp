#include <iostream>
#include <iomanip>

using namespace std;

void adderare(int& talA, int& talB);
void multiadderare(int& talA, double& talC, double& summa);
void flytadderare(double& talC, double& talD);
void switcher(int& talA, double& talC);
int n_fak(int talA);

int main()
{

  int talA{};
  int talB{};
  double talC{};
  double talD{};
  double summa{};

  cout << "Meny: " << endl;
  cout << "1. Adderare(2 integer)" << endl;
  cout << "2. Multiadderare(1 integer + 1 double)" << endl;
  cout << "3. Multiadderare(1 double + 1 integer)" << endl;
  cout << "4. Flytadderare(1 double + 1 double)" << endl;
  cout << "5. Switcher(byter värde på 1 int och 1 double)" << endl;
  cout << "6. N-fak" << endl;

  int menu{};
  cin >> menu;

  if(menu == 1)
  {
    adderare(talA, talB);
    summa = talA + talB;
    cout <<"Svar: " << summa << endl;
  }
  else if(menu == 2)
  {
    cout << "Skriv in ett heltal: ";
    cin >> talA;
    cout << "Skriv in ett flyttal du vill addera med föregående tal: ";
    cin >> talC;
    multiadderare(talA, talC, summa);
    cout << "Svar: " << summa << endl;
  }
  else if(menu == 3)
  {
    cout << "Skriv in ett flyttal: ";
    cin >> talC;
    cout << "Skriv in ett heltal du vill addera med föregående tal: ";
    cin >> talA;
    multiadderare(talA, talC, summa);
    cout << "Svar: " << summa << endl;
  }
  else if(menu == 4)
  {
    flytadderare(talC, talD);
    summa = talC + talD;
    cout << "Svar: " << summa << endl;
  }
  else if(menu == 5)
  {
    switcher(talA, talC);
    cout << "Svar: " << "integer: " << talA << " double: " << setprecision(2) << fixed << talC << endl;
  }

  else if(menu == 6)
  {
    cin >> talA;
    talB = n_fak(talA);
    cout << "Svar: " << talB << endl;
  }

  return 0;
}

void adderare(int& talA, int& talB)
{
  cout << "Skriv in ett tal: ";
  cin >> talA;
  cout << "Skriv in ett till tal du vill addera med ditt föregående tal: ";
  cin >> talB;
}
void multiadderare(int& talA, double& talC, double& summa)
{
  summa = talA+talC;
}

void flytadderare(double& talC, double& talD)
{
  cout << "Skriv in ett flyttal: ";
  cin >> talC;
  cout << "Skriv in ett till flyttal du vill addera med ditt föregående tal: ";
  cin >> talD;
}

void switcher(int& talA, double& talC)
{
  cout << "Skriv in ett heltal: ";
  cin >> talA;
  cout << "Skriv in ett flyttal: ";
  cin >> talC;
  int temp{talA};
  talA = talC;
  talC = temp;
}

int n_fak(int talA)
{
  if(talA == 1)
  {
    return 1;
  }
  else
  {
    return talA*n_fak(talA-1); 
  }
}
