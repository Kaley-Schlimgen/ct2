//
//  main.cpp
//  ct2
//
//  Created by Kaley Schlimgen on 1/23/25.
//

#include <iostream>
#include <string>

int main() {
    std::string lastName;
    std::string fullName;
    
    for (int i = 1; i<=2; ++i) {
        //NUM - change to loop i
        std::cout << "Enter Patient NUM's Last Name: ";
        std::getline(std::cin, lastName);
        std::string fullName = lastName;
    }
    
    
    for (int i = 1; i<=2; ++i) {
        std::cout << "You Entered: " << fullName << std::endl;
    }
     
    
    return 0;
}
