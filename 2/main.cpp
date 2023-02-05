#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n1;
    cin >> n1;
    vector<signed char> s1 = vector<signed char>(n1);
    vector<int> a1 = vector<int>(n1);
    for (int i = 0; i < n1; ++i) {
        cin >> s1[i];
    }
    for (int i = 0; i < n1; ++i) {
        cin >> a1[i];
    }
    int n2;
    cin >> n2;
    vector<signed char> s2 = vector<signed char>(n2);
    vector<int> a2 = vector<int>(n2);
    for (int i = 0; i < n2; ++i) {
        cin >> s2[i];
    }
    for (int i = 0; i < n2; ++i) {
        cin >> a2[i];
    }
    for (int i = 0; i < n1; ++i) {

    }



    return 0;
}