#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    unsigned long long num;
    cin >> num;
    vector<int> bit;

    while(num > 0) {
        bit.push_back(num %2);
        num /= 2;
    }

    for(int i = bit.size() -1; i >= 0; --i) {
        cout << bit.at(i);
    }
    printf("\n");
}