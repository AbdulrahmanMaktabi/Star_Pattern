#include <iostream>
using namespace std;

int main()
{
    int n , m ;

    do {
        cout << "Enter Number of lines: ";
        cin >> n;
    } while (n <= 0 || n % 2 == 0);

    m = -1;
    for (int i=1; i <= n; i++){
      if (i <= n/2){
        for (int j=1; j <= n/2 + 1 - i; j++){
          cout<<" ";
        } cout<<"*";
        for(int k=1; k <= m ; k++){
          cout<<" ";
        }
        if (i != 1)
          cout<<"*";
          m += 2;
      }
      else {
      for (int j=1; j <= i - (n/2) - 1 ; j++){
          cout<<" ";
        } cout<<"*";

      for (int k=1; k <= m; k++){
        cout<<" ";
      }

      if (i != n)
        cout<<"*";
        m -= 2;

      }
      cout<<endl;
    }
    return 0;
}
