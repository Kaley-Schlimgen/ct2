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
    
//FIXME change to 3
    //numPatients is 3
    int numPatients = 2;
    
    //create vector so we can get and print the user's input using a for loop
    
    //get two string user inputs 3 (numPatients = 3) times
    for (int i = 0; i < numPatients; ++i) {
        //take two string inputs from user
        std::cout << "Enter compound word " << i + 1 << "'s first word: ";
        std::cin.getline(firstWord, 200);
        
        std::cout << "Enter compound word " << i + 1 << "'s second word: ";
        std::cin.getline(secondWord, 200);
        
        std::strcat(firstWord, secondWord);
        std::cout << "Compound Word " << i + 1 << ": " << firstWord << std::endl;
        
    }
    
    std::cout << std::endl;
     
    return 0;
}
