#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("numbers.txt");

    int max = INT_MIN;
    int number;
    while(file >> number) {
        if(number > max) {
            max = number;
        }
    }

    cout << max << endl;

    file.close();

    return 0;
}