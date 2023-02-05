#include <iostream>

using namespace std;



int main() {
    int n, m;
    cin >> n >> m;
    int i, j, k;
    k = m;
    while(n) {
        if(k == m) {
            i = 0;
            j = m % 2 == 1 ? 1 : -1;
        }
        k = m / 2 + (m % 2) + i * j;
        if (m % 2 == 1 && j == 1 || m % 2 == 0 && j == -1)
            ++i;
        j *= -1;
        n--;
        cout << k << endl;
    }
    return 0;
}