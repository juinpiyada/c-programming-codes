#include<stdio.h>
#include<string.h>

void main() {
    FILE *p;
    char s1[100];
    int i, n;

    p = fopen("juin.txt", "w");  // Open the file for reading and writing
    if (p == NULL) {
        printf("file is empty\n");
        return;
    } else {
        printf("file is created\n");
    }

    printf("Enter the text into the file: ");
    fgets(s1, sizeof(s1), stdin);  // Use fgets instead of gets
    n = strlen(s1);
    for (i = 0; i < n; i++) {
        fputc(s1[i], p);  // Use fputc to write each character to the file
    }
    fclose(p);
}
