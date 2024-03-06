#include <cstdlib>

int main() {
    // Replace the URL with the YouTube link you want to open
    const char* youtubeURL = "https:\\www.youtube.com";

    // Use the system function to open the default web browser on Windows
    system("start " + std::string(youtubeURL));

    return 0;
}
