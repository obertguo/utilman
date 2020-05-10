#include <iostream>

int main()
{
    std::string input;
    std::cin >> input;

    if (input == "cmd") system("cmd.exe");

    if (input == "y" || input == "n") {
        input == "y" ? system("net user administrator /active:yes") : system("net user administrator /active:no");
        system("shutdown.exe /r /t 00");
    }

    else main();
}