#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  (a % 2 == 0 ? cout << "even" << endl : cout << "odd" << endl);
  return 0;
}