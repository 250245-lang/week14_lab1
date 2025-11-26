#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream ifile("input.txt");
    ofstream ofile("even.txt");

    int number;

    while (ifile >> number) {
        if (number % 2 == 0) {
            ofile << number << " ";
        }
    }

    ifile.close();
    ofile.close();
    return 0;
}