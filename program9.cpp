#include <iostream>
using namespace std;

int main() {

  int n;

  do {
    cout << "Enter A Number Of Lines: ";
    cin >> n;
  } while (n%2==0 || n<=0);

  for (int i=1; i <= n; i++) {
    if (i <= n/2) {

      for (int j=1; j <= n/2+1 - i; j++){
        cout << "-";
      } cout << "*";

      for (int k=1; k < i*2 - 1; k++){
        cout << "*";
      }

      for (int l=1; l <= n/2+1 -i; l++){
        cout << "-";
      }
    }
    else {

      for (int j=1; j < i - n/2; j++){
        cout << "-";
      } cout << "*";

      for (int k=1; k <= n*2 - i*2; k++){
        cout << "*";
      }

      for (int l=1; l < i - n/2; l++){
        cout << "-";
      }

    }
    cout<<endl;
  }
  return 0;
}
