#include <iostream>
#include <cmath>

void drawLine(int x1, int y1, int x2, int y2) {
    // Calculate differences in coordinates
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Calculate steps and increments for x and y
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float xIncrement = static_cast<float>(dx) / steps;
    float yIncrement = static_cast<float>(dy) / steps;

    // Initialize current coordinates
    float x = x1;
    float y = y1;

    // Draw the line
    for (int i = 0; i <= steps; ++i) {
        // Round the coordinates to the nearest integers
        int x_rounded = round(x);
        int y_rounded = round(y);

        // Print '*' at the rounded coordinates
        std::cout << "\033[" << y_rounded << ";" << x_rounded << "H.";

        // Increment the coordinates
        x += xIncrement;
        y += yIncrement;
    }

    std::cout << std::endl;
}

int main() {
    // Example: Drawing a line from (2, 3) to (9, 8)
    int x1 = 0, y1 = 0;
    int x2 = 10, y2 = 10;

    // Clear the terminal screen
    std::cout << "\033[2J";

    // Draw the line
    drawLine(10, 0, 20, 10);
    drawLine(10, 0, 0, 10);
    // drawLine(6, 5, 9, 5);

    return 0;
}
