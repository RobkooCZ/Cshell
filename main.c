#include "header.h"

int main() {
    system("cls");
    char command[STRING_SIZE];
    
    while (true) {
        printf("robkoosShell> ");
        fgets(command, sizeof(command), stdin);
        printf("Command: %s", command);
    }

    return 0;
}   