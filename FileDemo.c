#include <stdio.h>
int main() {
    FILE *fp;
    char str[100];
    // Create and open file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("File cannot be opened.");
        return 1;
    }
    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);
    // Write string to file
    fputs(str, fp);
    // Close the file
    fclose(fp);
    // Open file again for reading
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("File cannot be opened.");
        return 1;
    }
    printf("\nContent of the file:\n");
    // Read and display file content
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);

    return 0;
}