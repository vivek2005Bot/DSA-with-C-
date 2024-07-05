#include <iostream>
#include <string>

std::string convertToInitials(const std::string& name) {
    std::string initials;
    bool newWord = true;
    for (char ch : name) {
        if (newWord && ch != ' ') {
            initials += ch;
            newWord = false;
        } else if (ch == ' ') {
            newWord = true;
            // Stop adding initials if we encounter the first letter of the last name
            if (initials.back() == 'S') {
                break;
            }
        }
    }
    return initials;
}

int main() {
    std::string name = "Rajesh Kumar Singh";
    std::string initials = convertToInitials(name);
    std::cout << "Initials: " << initials << " Singh" << std::endl;
    return 0;
}
