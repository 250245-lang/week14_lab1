#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream ifile("data.txt");

    int number, count = 0;

    while (ifile >> number) {
        if (number < 0) {count++;}
    }

    cout << count << endl;
    ifile.close();
    return 0;
}