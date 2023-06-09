#include <iostream>
#include <string>
using namespace std;

int min_operations_to_palindrome(string A) {
    int count = 0;
    int n = A.length();

    for (int i = 0; i < n / 2; i++) {
        int j = n - i - 1;

        if (A[i] != A[j]) {
            count++;
            A[i] = '0' + ('1' - A[i]);
        }
    }

    return count;
}

int main() {
    string A;
    cin >> A;

    int result = min_operations_to_palindrome(A);
    cout << result << endl;

    return 0;
}
