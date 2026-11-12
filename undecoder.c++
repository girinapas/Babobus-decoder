#include <iostream>
#include <string>
using namespace std;

string encrypt(const string& word) {
    int len = word.length();
    int half = len / 2;
    int secondHalf = len - half;
    string first  = word.substr(0, half);
    string second = word.substr(half, secondHalf);

    string result;
    for (int i = 0; i < secondHalf; i++) {
        if (i < half) {
            result += second[i];
            result += first[i];
        } else {
            result += second[i];
        }
    }
    return result;
}

string decrypt(const string& cipher) {
    int len = cipher.length();
    int half = len / 2;
    int secondHalf = len - half;
    string second, first;
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) second += cipher[i];
        else            first  += cipher[i];
    }

    return first + second;
}

int main() {
    string word;
    cin >> word;
    cout  << decrypt(word) << endl;
    string s = word;
    for (int i = 1; i <= 4; i++) {
        s = encrypt(s);
    }

    return 0;
}