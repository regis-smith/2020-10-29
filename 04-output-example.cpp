/*
  File output example
*/

#include <fstream>
#include <iostream>
#include <string>

int main()
{
  std::ofstream outfile;
  outfile.open("my_output.txt");

  if (!outfile.is_open()) {
    std::cout << "Error: Can not open file.\n";
    return 1;
  }

  outfile << "Hello!  How are you!  My favorite number\n is 21.\n"; // Use like "cout <<"
  
  outfile.close();
}

  
