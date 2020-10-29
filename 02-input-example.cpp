/*
  File input getting whole lines
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

  // 3. Read each line of text using getline
  std::string line;
  while (std::getline(infile,line)) std::cout << line << std::endl;

  // 4. Close the file
  infile.close();
}

  
