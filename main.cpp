#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(65001);
    
    char str[] = "好きな文字列";
    printf("%s", str);

    return 0;
}