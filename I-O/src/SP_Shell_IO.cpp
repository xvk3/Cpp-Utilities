// Made by Sean P


#include "SP_IO.hpp"


// Prints the program name and author information:
void sp_print_intro(const char* programName)
{
    std::cout << programName << std::endl; // Print the name of the program
    std::cout << "Creator: \tSean Pesce" << std::endl << std::endl;
}


// Prints a prompt message and waits for the user to press Enter (Return) key:
void enter_to_continue(const char* prompt)
{
    std::cin.clear(); // Clear the input buffer
    std::cout << prompt; // Print the prompt message
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Wait for user input
}

// Prints a prompt message, waits for the user to press Enter (Return) key,
//  and prints a final message before continuing:
void enter_to_continue(const char* prompt, const char* continueMessage)
{
    std::cin.clear(); // Clear the input buffer
    std::cout << prompt; // Print the prompt message
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Wait for user input
    std::cout << continueMessage; // Print the continuing message
}

