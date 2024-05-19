#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a;
  char str[100];
  cin >> a;
  getchar();
  cin.getline(str, 100);
  cout << a
       << endl;
  cout << str << endl;
  return 0;
}