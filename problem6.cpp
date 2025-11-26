#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream ifile("source.txt");
    ofstream ofile("copy.txt");

    string line;

    while (getline(ifile, line)) {
        ofile<<line<<endl;
    }

    ifile.close();
    ofile.close();
    return 0;
}