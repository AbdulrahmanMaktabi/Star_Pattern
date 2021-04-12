#include <iostream>
using namespace std;

int main()
{
    int n, m;

    do {
        cout << "Enter N: ";
        cin >> n;
        cout << "Enter M: ";
        cin >> m;
    } while (n <= 0 || m <= 0);

    for (int i = 0; i <= n; i++) {
        for (int k = 0; k <= n - i; k++) {
            cout << " ";
        }
        for (int j = 0; j <= m; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
