#include <cstdint>
#include <string>
#include <iostream>

#include "base64.hpp"

using namespace std;

int main() {
  vector<uint8_t> bytes {
    uint8_t(0x68), uint8_t(0x65), uint8_t(0x6c), uint8_t(0x6c), 
    uint8_t(0x6f), uint8_t(0x2c), uint8_t(0x20), uint8_t(0x77), 
    uint8_t(0x6f), uint8_t(0x72), uint8_t(0x6c), uint8_t(0x64),
  };
  string ans;
  base64::encode(bytes, ans);
  cout << ans << endl;
}