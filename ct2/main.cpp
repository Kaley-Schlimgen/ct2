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
    
    //NUM - change to loop i
    std::cout << "Enter Patient NUM's Last Name: ";
    std::getline(std::cin, lastName);
    
    std::cout << "You Entered: " << lastName << std::endl;
    return 0;
}
