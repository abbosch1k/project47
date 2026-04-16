#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> chat;
    string msg;

    while(true) {
        getline(cin, msg);

        if(msg == "exit") break;

        chat.push_back(msg);

        cout << "\nChat:\n";
        for(string m : chat)
            cout << m << endl;
    }
}
