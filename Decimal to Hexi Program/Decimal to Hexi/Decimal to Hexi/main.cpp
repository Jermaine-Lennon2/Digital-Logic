#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int decimal, remainder, product = 1;
  string hex_dec = "";
  cin >> decimal;
  while (decimal != 0) {
    remainder = decimal % 16;
    char ch;
    if (remainder >= 10)
      ch = remainder + 55;
    else
      ch = remainder + 48;
    hex_dec += ch;
  
    decimal = decimal / 16;
    product *= 10;
  }
  reverse(hex_dec.begin(), hex_dec.end());
  cout << "The number in the hexadecimal form is: " <<hex_dec;
}
