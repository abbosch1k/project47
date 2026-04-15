#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int drop=rand()%100;

    if(drop<50) cout<<"Common";
    else if(drop<80) cout<<"Rare";
    else cout<<"Legendary";
}
