int countChar(std::string line, char c){
  int count;

  for(int i = 0; i < line.length(); i++){

    if(line[i] == c){
      count ++;
    }
  }

return count;
}
