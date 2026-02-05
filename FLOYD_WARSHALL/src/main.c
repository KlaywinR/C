#include <stdio.h>
#include "menu/menu.h"

int main()
{
    int option;
    do {
        show_main_menu();
        scanf("%d", &option);
        handle_main_menu(option);
    } while (option != 0);

    return 0;
}

