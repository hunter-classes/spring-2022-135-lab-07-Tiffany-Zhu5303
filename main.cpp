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
  std::cout << "bad-code.txt OR bad-code2.txt OR bad-code3.txt" << std::endl;
  std::cin >> filename;
  while (filename != "bad-code.txt" && filename != "bad-code2.txt" && filename != "bad-code3.txt"){
    std::cout << "\nbad-code.txt OR bad-code2.txt OR bad-code3.txt" << std::endl;
    std::cout << "Re-enter a valid file to read: ";
    std::cin >> filename;
  }

  std::cout << "=====Original File=====" << std::endl;
  std::string originallines;

  std::ifstream originalfile(filename);
  while (getline(originalfile, originallines)){
    std::cout << originallines << std::endl;
  }
  std::cout << "\n";
  originalfile.close();


  std::cout << "=====Removed Indentation (TASK A)=====" << std::endl;
  text.open(filename);
  std::ofstream newtext("newtext.txt");
  
  while (getline(text, file)){
    std::cout << removeLeadingSpaces(file) << std::endl;

    newtext << removeLeadingSpaces(file);
    newtext << "\n";
    }

  std::cout << "\n";
  text.close();
  newtext.close();

  //Task B
  std::cout << "=====Added Indentation (TASK B)=====" << std::endl;
  std::cout << actualIndent("newtext.txt") << std::endl;
  
  return 0;
}
