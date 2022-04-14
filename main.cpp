#include <iostream>
#include <fstream>
#include <cctype>

#include "unindent.h"
#include "indent.h"

int main(){
  //Task A
  std::ifstream text; 
  std::string file, filename;

  std::cout << "Which file do you want to read?" << std::endl;
  std::cin >> filename;

  text.open(filename);

  std::ofstream newtext("newtext.txt");
  
  while (getline(text, file)){
    std::cout << removeLeadingSpaces(file) << std::endl;

    newtext << removeLeadingSpaces(file);
    newtext << "\n";
    }

  text.close();
  newtext.close();

  //Task B
  std::cout << "\n-------------------------------\n" << actualIndent("newtext.txt") << std::endl;
  
  return 0;
}
