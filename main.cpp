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
    }

  text.close();
  newtext.close();

  //Task B
  std::ifstream textB;
  textB.open("newtext.txt");
  std::string fileB;

  while(getline(textB, fileB)){
    std::cout << countChar(fileB, '{') << countChar(fileB, '}') << std::endl;
  }
  
  return 0;
}
