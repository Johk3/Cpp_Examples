#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <numeric>
#include <sstream>
#include <vector>
#include <boost/algorithm/string.hpp>   
#include <algorithm>
#include <string> 

std::string ceasarCipher(std::string message, int shift, bool cryption);
char easytolower(char in);

int main(int argc, char **argv){
    std::string encrypted = ceasarCipher("BOB IS a pepega", 5, true);
    std::cout << "Encrypted  " << encrypted << "\n";
    
    std::string decrypted = ceasarCipher(encrypted, 5, false);
    std::cout << "Decrypted  " << decrypted << "\n";
    return 0;
}

std::string ceasarCipher(std::string message, int shift, bool cryption){
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string result;
    std::ostringstream convert;
    if(cryption){
        for(int i = 0; i < message.size(); i++){
            for(int x = 0; x < alphabet.size(); x++){
                if(easytolower(message[i]) == alphabet[x]){
                    if(shift+x > alphabet.size()){
                        result += alphabet[(shift+x) - alphabet.size()];
                        std::cout << "Shifted " << std::to_string((shift+x) - alphabet.size()) << " From " << std::to_string(x) << "\n";
                    }else{
                        std::cout << "Shifted " << shift+x << " From " << std::to_string(x) << "\n";
                        result += alphabet[shift+x];
                    }
                    break;
                }
            }
        }
    }
    else{
        for(int i = 0; i < message.size(); i++){
            for(int x = 0; x < alphabet.size(); x++){
                if(easytolower(message[i]) == alphabet[x]){
                    if(x-shift < 0){
                        result += alphabet[alphabet.size()+(x-shift)];
                        std::cout << "Snifted " << std::to_string(alphabet.size()+(x-shift)) << " From " << std::to_string(x) << "\n";
                    }else{
                        std::cout << "Shifted " << x-shift << " From " << std::to_string(x) << "\n";
                        result += alphabet[x-shift];
                    }
                    break;
                }
            }
        }
    }
    
    return result;
}

char easytolower(char in) {
  if(in <= 'Z' && in >= 'A')
    return in - ('Z' - 'z');
  return in;
}