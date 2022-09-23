#include <iostream>
#define harga 4500.02
using namespace std;

int main () {
  float jumlah, total ;
  cout << "masukan jumlah barang = ";
  cin >> jumlah; total = harga*jumlah;
  cout << "yang harus dibayar = " <<total<<endl;

  return 0;
  }