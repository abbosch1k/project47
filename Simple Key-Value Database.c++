#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice;
    string key, value, k, v;

    cout << "1-Set 2-Get: ";
    cin >> choice;

    if(choice == 1) {
        ofstream f("db.txt", ios::app);
        cin >> key >> value;
        f << key << " " << value << endl;
    } 
    else {
        ifstream f("db.txt");
        cin >> key;

        while(f >> k >> v) {
            if(k == key) {
                cout << v;
                return 0;
            }
        }
        cout << "Not found";
    }
}
