#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Write your code here
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int max_mark = -1;
    int ids = INT_MAX;
    char sections[2], names[101];

    for (int j = 0; j < 3; j++)
    {
      int id, marks;
      char section[2], name[101];
      cin >> id >> name >> section >> marks;

      if (marks > max_mark || (marks == max_mark && id < ids))
      {
        max_mark = marks;
        ids = id;
        strcpy(sections, section);
        strcpy(names, name);
      }
    }

    cout << ids << " " << names << " " << sections << " " << max_mark << endl;
  }

  return 0;
}