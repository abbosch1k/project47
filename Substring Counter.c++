#include <iostream>
using namespace std;

int main() {
    string s="hello hello";
    int count=0;

    for(int i=0;i<s.size()-4;i++)
        if(s.substr(i,5)=="hello")
            count++;

    cout<<count;
}
