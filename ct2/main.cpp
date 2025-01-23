//
//  main.cpp
//  ct2
//
//  Created by Kaley Schlimgen on 1/23/25.
//

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string lastName;
    int numPatients = 2;
    //std::string fullName;
    
    std::vector<std::string> fullName(numPatients);
    //std::vector<std::string> fullName(2);
    
    for (int i = 0; i<numPatients; ++i) {
    //for (int i = 1; i<=2; ++i) {
        //NUM - change to loop i
        std::cout << "Enter Patient NUM's Last Name: ";
        std::getline(std::cin, lastName);
        fullName[i] = lastName;
    }
    
    
    //for (int i = 1; i<=2; ++i) {
    for (int i = 0; i<numPatients; ++i) {
        std::cout << "You Entered: " << fullName[i] << std::endl;
    }
     
    
    return 0;
}
