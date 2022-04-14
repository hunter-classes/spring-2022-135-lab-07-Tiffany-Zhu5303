#include <iostream>
#include <cctype>

#include "unindent.h"

std::string removeLeadingSpaces(std::string line){
  std::string newLine;
  // std::cout << line << " this is it" << std::endl;

  for(int i = 0; i < line.length(); i++){
    //start adding to the new line once we get past the indents
    if(isspace(line[i]) == false){

     newLine = newLine + line[i];

     //add the spaces if it isn't an indent
    }else if(newLine.length() !=0){
      
      newLine = newLine + line[i];
      
      }
    
  }

  return newLine;

}
