#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("message.txt");
    string message;

    getline(cin, message);

    file << message;

    file.close();

    return 0;
}