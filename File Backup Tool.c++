#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char* path = getenv("PATH");
    cout << path;
}
