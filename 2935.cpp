#include <iostream>
#include <string.h>

using namespace std;
int main(void) {
    char A[110];
    char B[110];
    char op;
    cin >> A;
    cin >> op;
    cin >> B;

    if (op == '*') {
        cout << "1";
        for (int i = 0; i < strlen(A) + strlen(B) - 2; i++) {
            cout << "0";
        }
    } else {
        if (strlen(A) == strlen(B)) {
            cout << "2";
            for (int i = 0; i < strlen(A) - 1; i++) cout << "0";
        }
        else {
            int max = strlen(A) > strlen(B) ? strlen(A) : strlen(B); 
            cout << "1";
            for (int i = 0; i < strlen(A) - strlen(B) - 1; i++) cout << "0";
            cout << B;
        }

    }
    

    return 0;
}
