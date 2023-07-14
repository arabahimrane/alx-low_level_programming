#include <stdio.h>

int main(void) {
    char letter;
    char bigletter;

    for (letter = 'a'; letter <= 'z'; letter++) {
        putchar(letter);
    }
    for(bigletter = 'A'; bigletter <= 'Z'; bigletter++) {
      putchar(bigletter);
    }

    putchar('\n');

    return 0;
}
