#include <iostream>
#include <cctype>
#include <fstream>
#include "indent.h"
#include "unindent.h"

int countChar(std::string line, char c){
  int count = 0;

  for(int i = 0; i < line.length(); i++){
    if(line[i] == c){
      count ++;
    }
  }

  return count;
}

std::string actualIndent(std::string fileName){
  std::ifstream text;
  text.open(fileName);
  std::string line;
  
  std::string spaces = "";

  while (getline(text, line)){
    std::cout << spaces << line << std::endl;

    if(countChar(line, '{') > 0){
      spaces += "\t";
      
    }else if(countChar(line, '}') > 0){
      spaces = spaces.substr(0, spaces.length() - 1);
    }

  }

  text.close();
  return " ";
}


  
