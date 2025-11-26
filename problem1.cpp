#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("input.txt");
    int number, sum = 0;

    while(inputFile >> number) {
        sum += number;
    }

    cout << sum << endl;
    inputFile.close();

    return 0;
}