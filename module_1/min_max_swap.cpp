#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int my_swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
};

int main(void)
{
  int a;
  int b;
  cin >> a >> b;
  int mx = max(a, b);
  int mn = min(a, b);
  // my_swap(&a, &b);
  //  swap(a, b);
  cout << mx;
  return 0;
};
