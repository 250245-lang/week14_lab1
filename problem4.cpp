#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("count.txt");

    int number;
    cin >> number;

    for (int i = 1; i <= number; i++) {
        file << i << " ";
    }

    file.close();

    return 0;
}