#include <iostream>
#include <raylib.h>

using namespace std;

int main()
{

    cout << "Hello!" << endl;

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Hello World");

    CloseWindow();
    return 0;
}