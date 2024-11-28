#include <stdio.h>
int main() {
    char name[50];
    int choice;

    printf("Enter your friend's name: ");
    scanf("%s", name);

    printf("Choose a greeting style (1-3):\n");
    printf("1. Simple\n");
    printf("2. Enthusiastic\n");
    printf("3. Poetic\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Happy Diwali, %s! Enjoy the festival of lights.\n", name);
    } else if (choice == 2) {
        printf("Hey %s! Happy Diwali! May your life be filled with joy, light, and endless celebrations!\n", name);
    } else if (choice == 3) {
        printf("Dear %s, wishing you a Diwali as bright and joyful as the lights that adorn our homes. Happy Diwali!\n", name);
    } else {
        printf("Happy Diwali, %s! Hope you have a wonderful celebration.\n", name);
    }

    return 0;
}