#include <fstream>
#include <iostream>
using namespace std;

int main() {
  double first, second, secondLast, last, data;\
  double checkEnd;
  int i = 4;
  bool endFile = false;
  
  // make a file stream object and open it
  ifstream infile;
  infile.open("num3.txt");

  // go ahead and get the first two values
  infile >> first >> second;
  
  // assign the last two so we can do checks on them
  infile >> secondLast >> last;
  
  // update the last two values and total count until end of file
  while (infile >> checkEnd) {
    if (infile.fail()) { break; } else {
      secondLast = last;
      last = checkEnd;
      i++;
    }
  }

  // print results
  cout << "First value: " << first << endl;
  cout << "Second value: " << second << endl;
  cout << "Second to last value: " << secondLast << endl;
  cout << "Last value: " << last << endl;
  cout << "Total number of values: " << i;

  // close file and end program
  infile.close();
  return 0;
}
