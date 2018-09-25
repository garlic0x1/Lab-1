#include <fstream>
#include <iostream>
using namespace std;

int main() {
  double first, second, secondLast, last, data;\
  double checkEnd;
  int i = 4;
  bool endFile = false;

  ifstream infile;
  infile.open("num3.txt");

  infile >> first >> second;
  infile >> secondLast >> last;

  while (infile >> checkEnd) {
    if (infile.fail()) { break; } else {
      secondLast = last;
      last = checkEnd;
      i++;
    }
  }

  cout << "First value: " << first << endl;
  cout << "Second value: " << second << endl;
  cout << "Second to last value: " << secondLast << endl;
  cout << "Last value: " << last << endl;
  cout << "Total number of values: " << i;

  infile.close();
  return 0;
}
