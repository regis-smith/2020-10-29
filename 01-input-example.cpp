/*
  File input example
  1. Try to open the file.
  2. Check that file was opened.
  3. Do stuff with the file.
  4. Close the file.
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

  // 3. Do something
  std::string word;
  while (infile >> word) std::cout << word << std::endl;

  // 4. Close the file
  infile.close();
}

  
