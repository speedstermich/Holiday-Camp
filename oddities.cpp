#include <iostream>
using namespace std;

main()
{
  int n;
  int a[100];

  cin >> n;
  for (int  i = 0; i < n; i++)
  {
    /* code */
    cin >> a[i];
  }
  for (int  i = 0; i < n; i++)
  {
    /* code */
    if(a[i]%2 == 0)
    {
      cout << a[i] << " is even"<< '\n';
    }
    else
    {
      cout << a[i] << " is odd"<< '\n';
    }
  }
return 0;
}
