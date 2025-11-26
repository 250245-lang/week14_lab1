#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fileA("a.txt");
    ifstream fileB("b.txt");

    int number, count = 0;

    while (fileA >> number) {
        count++;
    }
    while (fileB >> number) {
        count++;
    }
    cout << count << endl;
    return 0;
}