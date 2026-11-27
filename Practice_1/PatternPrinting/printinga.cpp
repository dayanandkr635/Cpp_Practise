#include <iostream>
using namespace std;

int main() {
    int n = 5; // Adjust 'n' to change pattern size

    // 1. Half Pyramid & 2. Inverted Half Pyramid
    cout << "1. Half Pyramid & 2. Inverted Half Pyramid:\n";
    for (int i = 1; i <= n; i++) { for (int j = 1; j <= i; j++) cout << "* "; cout << "\n"; }
    for (int i = n; i >= 1; i--) { for (int j = 1; j <= i; j++) cout << "* "; cout << "\n"; }

    // 3. Full Pyramid & 4. Diamond Pattern
    cout << "\n3. Full Pyramid & 4. Diamond:\n";
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << "\n";
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << "\n";
    }

    // 5. Hollow Square
    cout << "\n5. Hollow Square:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) 
            cout << (i == 1 || i == n || j == 1 || j == n ? "* " : "  ");
        cout << "\n";
    }

    // 6. Number Pyramid & 7. Floyd's Triangle & 8. Pascal's Triangle
    cout << "\n6-8. Number, Floyd's & Pascal's Triangles:\n";
    int num = 1;
    for (int i = 1; i <= n; i++) { for (int j = 1; j <= i; j++) cout << j << " "; cout << "\n"; }
    for (int i = 1; i <= n; i++) { for (int j = 1; j <= i; j++) cout << num++ << " "; cout << "\n"; }
    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 0; j <= i; j++) { cout << val << " "; val = val * (i - j) / (j + 1); }
        cout << "\n";
    }

    // 9. Alphabet Pyramid & 10. Butterfly Pattern
    cout << "\n9. Alphabet & 10. Butterfly:\n";
    for (int i = 1; i <= n; i++) { char ch = 'A'; for (int j = 1; j <= i; j++) cout << ch++ << " "; cout << "\n"; }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int s = 1; s <= 2 * (n - i); s++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int s = 1; s <= 2 * (n - i); s++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }

    return 0;
}
