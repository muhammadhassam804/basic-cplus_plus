#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string ss;
    char cc[17];

    ss = "this is a string";

    strcpy(cc, "this is a string");

    cout << ss << endl;
    cout << cc << endl;

    return 0;
}
