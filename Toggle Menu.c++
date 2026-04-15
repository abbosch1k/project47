#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("activity.txt", ios::app);
    f<<"User opened app\n";
}
