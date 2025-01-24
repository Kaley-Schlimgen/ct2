//
//  main.cpp
//  ct2
//
//  Created by Kaley Schlimgen on 1/23/25.
//

#include <iostream>
#include <cstring>
#include <string>
#include <vector>

int main() {
    char firstWord[200] = "";
    char secondWord[200] = "";
    
    int numWords = 3;
    
    std::cout <<"BUILDING COMPOUND WORDS\n";
    
    //get two string user inputs, numWords times
    for (int i = 0; i < numWords; ++i) {
        std::cout << "\nWORD #" << i + 1;
        
        //take two string inputs from user
        std::cout << "\nEnter First Word of Compound Word #" << i + 1 << ": ";
        std::cin.getline(firstWord, 200);
        
        std::cout << "Enter Second Word of Compound Word #" << i + 1 << ": ";
        std::cin.getline(secondWord, 200);
        
        std::strcat(firstWord, secondWord);
        std::cout << "Your Compound Word is: " << firstWord << std::endl;
        
    }
    
    std::cout << std::endl;
     
    return 0;
}
