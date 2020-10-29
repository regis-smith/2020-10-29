/*
  File input getting one char at a time
*/

#include <fstream>
#include <iostream>
#include <string>

int main()
{
  // 1. Try to open the file.
  std::ifstream infile;
  infile.open("lorem-ipsum.txt");

  // 2. Check that file was opened
  if (!infile.is_open()) {
    std::cout << "Error: Can not open file.\n";
    return 1;
  }

  // 3. Read the next char using get
  char c;
  while (infile.get(c)) std::cout << c;

  // 4. Close the file
  infile.close();
}

  
