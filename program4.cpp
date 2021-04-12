#include <iostream>
using namespace std;

int main()
{
    int n;

    do {
        cout << "Enter Number of lines: ";
        cin >> n;
    } while (n <= 0 || n % 2 == 0);

    for (int i = 1; i <= n; i++) {
        if (n / 2 + 1 >= i) {
            for (int j = 1; j <=n/2+1-i; j++) {
                cout << " ";
            }
            for (int k = 1; k <= i; k++) {
                cout << "*";
            }
        }
        else {
            for (int j = 1; j <i - n / 2 ; j++) {
                cout << " ";
            }
            for (int k = 1; k <= n-i+1; k++) {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
