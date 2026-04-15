#include <iostream>
using namespace std;

int main() {
    int arr[3]={10,20,30}, sum=0;

    for(int i=0;i<3;i++) sum+=arr[i];

    cout<<sum;
}
