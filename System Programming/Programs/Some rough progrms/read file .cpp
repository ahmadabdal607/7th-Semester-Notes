
#include <iostream>
#include <fstream>
int main() {
    const char* fileName = "C:\\Users\\Abdal Ahmad\\Desktop\\Catlen\\name.txt"; // Replace with the name of your text file
    char ch;
    std::ifstream file;
// Open the file
    file.open(fileName);
 if (!file.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }
// Read characters from the file one at a time
    while (file.get(ch)) {
        std::cout << ch;
    }
 file.close();
  return 0;
}


