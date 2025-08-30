// Numberic Hollow Pyramid 


//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5




#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        // spaces before numbers
        for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        // numbers in each row
        for (int col = 1; col <= row; col++) {
            // first column OR last column of row OR last row
            if (col == 1 || col == row || row == n) {
                cout << col << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
