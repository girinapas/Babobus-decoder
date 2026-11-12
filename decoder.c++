#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int len = word.length();
    int half = len / 2;
    int secondHalf = len - half;
    string first = word.substr(0, half);
    string second = word.substr(half, secondHalf);
    string result = "";
    for (int i = 0; i < secondHalf; i++) {
        if (i < half) {
            result += second[i];
            result += first[i];
        } else {
            result += second[i];
        }
    }
    cout << result << endl;

    return 0;
}