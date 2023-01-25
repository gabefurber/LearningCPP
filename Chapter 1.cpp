// Basic terminal interaction.

#include <iostream>
#include <string>

using namespace std; // This might be bad practice, but I'll stick to the curriculum for now.

int main(){
    string name; // Init name variable
    cout << "What's your name, traveller?" << endl; // Prints question, begins new line
    cin >> name; // Takes name as input (only one word - nothing after a space is captured.)
    cout << "Pleasure to meet you, " + name + "." << endl; // Responds, prints content of string, concantates with punctuation. 
    return(0); // Returns 0 since main is an int and there were no errors (hopefully.)
}