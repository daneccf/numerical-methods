#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() 
{
    unsigned long long decimal_num = 0;
    string binary;
    cin >> binary;

    reverse(binary.begin(), binary.end());

    int size = binary.size();
    for(int i = 0; i < size; i++) {
        if(binary[i] == '1') {
            decimal_num += pow(2, i);
        }
    }

    cout << "Decimal number is: " << decimal_num << endl;
}