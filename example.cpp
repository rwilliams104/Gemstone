#include <iostream>
#include <string>

class Gemstone {
private:
    std::string name = "Amethyst";
    int brightness = 100;

public:
    void display() {
        std::cout << "Welcome to Gemstone!" << std::endl;
    }
};

int main() {
    Gemstone theme;
    theme.display();

    return 0;
}
