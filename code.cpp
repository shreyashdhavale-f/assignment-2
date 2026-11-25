#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "hello";

    int left = 0;
    int right = str.length();

    while (left <= right) {

        swap(str[left], str[right]);

        left--;
        right++;
    }

    cout << str

    return 0;
}
