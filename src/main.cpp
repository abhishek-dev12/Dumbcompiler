#include <iostream>
#include  <fstream>
#include <sstream>
#include <optional>
#include <string>
#include <vector>
 
enum class TokenType {
   _return,
   int_lit,
      semicolon
};


struct Token {
   
   TokenType type;
   std::optional<std::string> value;
};


std::vector<Token> tokanize(const std::string& str){
    for (char c : str ){
    std::cout << c << std::endl;
    };
};

int main(int argc, char* argv[] ){

   
   if(!argv[1]){
      std::cerr << "not enough arguments" << std::endl;
      return EXIT_FAILURE; 
   };
  
   std::string content;
   
   {

      std::stringstream contents;
      std::fstream file(argv[1], std::ios::in);
      contents << file.rdbuf();
      content = contents.str();

   };

      // std::cout << content << std::endl;
    tokanize(content);
   
     

   
   return EXIT_SUCCESS;
   };