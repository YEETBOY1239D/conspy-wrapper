#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

int option_selected;
int limit1 = 1;
int limit2 = 3;

printf("Made by YEETBOY1239D on Github\n");
usleep(300000);
printf("┌- - - - - - - - - - - - - - - - - - - -┐\n");
printf(" Welcome! press 1 to start, or 2 to stop. \n");
printf("└- - - - - - - - - - - - - - - - - - - -┘\n");




while (1) {

    scanf("%d", &option_selected);

    if (option_selected == 1) {
        system("sudo conspy 1");
        break;
    }
    if (option_selected == 2) {
        printf("ok, exiting script\n");
        usleep(300000);
        break;
    }
    if (option_selected == 3) {

        printf("Okay. Select a TTY to conspy into (only tty 1-12)\n);
        int tty_selected;
            scanf("%d", &tty_selected);
        if (tty_selected == 1) {
            system("sudo conspy 1");
}
        if (tty_selected == 2) {
            system("sudo conspy 2");
}
        if (tty_selected == 3) {
            system("sudo conspy 3");
}
        if (tty_selected == 4) {
            system("sudo conspy 4");
}
        if (tty_selected == 5) {
            system("sudo conspy 5");
}
        if (tty_selected == 6) {
            system("sudo conspy 6");
}
        if (tty_selected == 7) {
            system("sudo conspy 7");
}
        if (tty_selected == 8) {
            system("sudo conspy 8");
}
        if (tty_selected == 9) {
            system("sudo conspy 9");
}
        if (tty_selected == 10) {
            system("sudo conspy 10");
}
        if (tty_selected == 11) {
            system("sudo conspy 11");
}
        if (tty_selected == 12) {
            system("sudo conspy 12");
}
        
    if (option_selected < limit1 || option_selected > limit2) {
        printf("invalid, stopping the script\n");
        break;
    }
}



return 0;
}
