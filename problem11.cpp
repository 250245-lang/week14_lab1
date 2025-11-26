#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream ofile("report.txt");

    string line = "File handling in C++ is easy!";

    ofile << line;

    ofile.close();
    return 0;
}