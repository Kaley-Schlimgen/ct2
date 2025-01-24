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
    //std::string lastName, firstName;
    char lastName[200] = "";
    char firstName[200] = "";
    
//FIXME change to 3
    //numPatients is 3
    int numPatients = 2;
    
    //create vector so we can get and print the user's input using a for loop
    //std::vector<std::string> fullName(numPatients);
    std::vector<char> fullName;
    
    //get two string user inputs 3 (numPatients = 3) times
    for (int i = 0; i < numPatients; ++i) {
        //take two string inputs from user
        std::cout << "Enter Patient " << i + 1 << "'s First Name: ";
        //std::getline(std::cin, firstName);
        std::cin.getline(firstName, 200);
        
        std::cout << "Enter Patient " << i + 1 << "'s Last Name: ";
        //std::getline(std::cin, lastName);
        std::cin.getline(lastName, 200);

//FIXME should names be smooshed together?
//FIXME would separating by comma not be concatenation?
        //concatenate the two strings
        //fullName[i] = lastName + ", " + firstName;
        //fullName[i] = strcat(lastName, firstName);
        
        
        std::strcat(lastName, firstName);
        std::cout << "\nPATIENT OUTPUT (Last & First):\n";
        std::cout << "Patient " << i + 1 << ": " << lastName << std::endl;
        
    }
    
    //std::cout << "\nPATIENT OUTPUT (Last, First):\n";
    
    //print concatenated inputs of various lengths
//    for (int i = 0; i < numPatients; ++i) {
    //for (char name : lastName) {
    
        //print concatenate of two entered strings as output onto screen
//        std::cout << "Patient " << i + 1 << ": " << fullName[i] << std::endl;
        //std::cout << lastName << std::endl;
        //std::cout << name << " ";
        
//    }
    //
    std::cout << std::endl;
     
    return 0;
}
