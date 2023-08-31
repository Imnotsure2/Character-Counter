#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 2000

int main(void) {
    char text[MAX_LENGTH];
    
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    int charCount = strlen(text) - 1;
    printf("Character count: %d\n", charCount);

    int wordCount = 1;

    for(size_t i = 0; i < strlen(text); i++ ) {
        if(text[i] == ' ') {
            wordCount++;
        }
    }

    printf("Word count: %d\n", wordCount);
}