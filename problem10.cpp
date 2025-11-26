#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;

    cin >> filename;
    ifstream ifile(filename);

    char c;
    int count = 0;
    while (ifile.get(c)) {
        count++;
    }
    cout << count << endl;

    ifile.close();
    return 0;
}