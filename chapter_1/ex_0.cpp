// Ask for the persons name and greet them 

#include <iostream>
#include <string>

int main(){
   std::cout << "Please enter your first name: ";
   std::string name; // define name
   std::cin >> name; // read from CL into name

   std::cout << "Hello, " << name << "!" << std::endl;

   return 0;  



}
