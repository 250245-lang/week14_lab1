#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream ofile("log.txt", ios::app);
    int number;
    cout << "What do you wanna append: " << endl;
    cin >> number;
    ofile << number;
    ofile.close();
    return 0;
}