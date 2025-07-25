#include<iostream>
#include<bitset>
using namespace std;

void printBinary(int num, string label) {
    cout << label << " (" << num << "): " << bitset<8>(num) << endl;
}

int main(){
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "\nBinary representation:" << endl;
    printBinary(a, "a");
    printBinary(b, "b");
    
    cout << "\nBitwise Operations:" << endl;
    cout << "a & b  (AND)        = " << (a & b) << endl;
    cout << "a | b  (OR)         = " << (a | b) << endl;
    cout << "a ^ b  (XOR)        = " << (a ^ b) << endl;
    cout << "~a     (NOT a)      = " << (~a) << endl;
    cout << "~b     (NOT b)      = " << (~b) << endl;
    
    cout << "\nShift Operations on 'a':" << endl;
    cout << "a << 1 (Left  1)    = " << (a << 1) << endl;
    cout << "a << 2 (Left  2)    = " << (a << 2) << endl;
    cout << "a >> 1 (Right 1)    = " << (a >> 1) << endl;
    cout << "a >> 2 (Right 2)    = " << (a >> 2) << endl;
    
    cout << "\nResult Binary:" << endl;
    printBinary(a & b, "AND");
    printBinary(a | b, "OR");
    printBinary(a ^ b, "XOR");
    
    return 0;
}
