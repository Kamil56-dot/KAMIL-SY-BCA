#include <iostream>
using namespace std;

int main() {
    for (int x= 0; x < 7; x++) {
       
        for (int c = 0; c < 5; c++) {
            if (x== 0 || x == 6)
                cout << "x";
            else if (c == 0)
                cout << "x";
            else
                cout << " ";
        }

        cout << "   "; 

        
        for (int p = 0; p < 5; p++) {
            if (p == 2 || x == 3)
                cout << "x";
            else
                cout << " ";
        }

        cout << "   "; 

        
        for (int q = 0; q < 5; q++) {
            if (q == 2 || x == 3)
                cout << "x";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}