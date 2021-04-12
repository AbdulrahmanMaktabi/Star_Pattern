#include <iostream>
using namespace std;

int main() {

  int n , m;

  do {
    cout << "Enter Height: ";
    cin >> n;

    cout << "Enter Width: ";
    cin >> m;
  } while (n <= 0 || m <= 0);

  for (int i=1; i <= n; i++){
    for (int j=1; j <= m; j++){
      if (i==1 || j==1 || i==n || j==m)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}
