/*
  Use stf::ofstream::app flag to append to output fileppend
*/

#include <fstream>
#include <iostream>
#include <string>

int main()
{
  std::ofstream outfile;
  outfile.open("my_output.txt",std::ofstream::app);

  if (!outfile.is_open()) {
    std::cout << "Error: Can not open file.\n";
    return 1;
  }

  outfile << "\nLet me tell you some more!\nMy favorite color is blue!\n";
  
  outfile.close();
}

  
