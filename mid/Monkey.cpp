#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  string s;
  while (getline(cin, s))
  {
    sort(s.begin(), s.end());
    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    cout << s << endl;
  }
  return 0;
}
