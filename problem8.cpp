#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream ifile("text.txt");

    string line;
    int count = 0;
    while (getline(ifile, line)) {
        count++;
    }
    cout << count << endl;
    ifile.close();
    return 0;
}