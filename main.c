#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void conspy(void) {
    system("sudo conspy 2");
}

int main() {

int option_selected;
int limit1 = 1;
int limit2 = 2;

printf("┌- - - - - - - - - - - - - - - - - - - -┐\n");
printf(" Welcome! press 1 to start, or 2 to stop. \n");
printf("└- - - - - - - - - - - - - - - - - - - -┘\n");




while (1) {

    scanf("%d", &option_selected);

    if (option_selected == 1) {
        conspy();
        break;
    }
    if (option_selected == 2) {
        printf("ok, exiting script\n");
        usleep(300000);
        break;
    }
    if (option_selected < limit1 || option_selected > limit2) {
        printf("invalid, stopping the script\n");
        break;
    }
}



return 0;
}
