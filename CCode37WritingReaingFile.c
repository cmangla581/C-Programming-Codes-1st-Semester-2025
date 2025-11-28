#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *fptr; // Declare a file pointer
    char data_to_write[] = "This is a test string to write to the file.\n";
    char buffer[256]; // Buffer to store read data

    // --- Writing to a file ---
    // Open the file in write mode ("w"). If the file doesn't exist, it will be created.
    // If it exists, its content will be truncated (overwritten).
    fptr = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        exit(1); // Exit the program if file opening fails
    }

    // Write the string to the file
    fprintf(fptr, "%s", data_to_write);
    printf("Data successfully written to example.txt\n");

    // Close the file after writing
    fclose(fptr);

    // --- Reading from a file ---
    // Open the file in read mode ("r")
    fptr = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        exit(1); // Exit the program if file opening fails
    }

    printf("\nReading data from example.txt:\n");

    // Read the file content line by line using fgets
    // fgets reads up to (sizeof(buffer) - 1) characters or until a newline is encountered
    // It stores the read string in 'buffer' and adds a null terminator.
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer); // Print the read line
    }

    // Close the file after reading
    fclose(fptr);

    return 0;
}