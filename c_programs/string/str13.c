#include <stdio.h>

#define MAX_ENTRIES 100 // Maximum number of entries the user can input

int main() {
    char entries[MAX_ENTRIES][100]; // Array to hold double strings
    int numEntries;

    // Prompt user for the number of entries
    printf("How many double strings do you want to enter (max %d)? ", MAX_ENTRIES);
    scanf("%d", &numEntries);

    // Ensure the number of entries does not exceed the maximum
    if (numEntries > MAX_ENTRIES || numEntries < 1) {
        printf("Please enter a valid number of entries (1 to %d).\n", MAX_ENTRIES);
        return 1; // Exit the program with an error code
    }

    // Input data for the specified number of double strings
    printf("Enter the double strings (format: \"word1 word2\"):\n");
    for (int i = 0; i < numEntries; i++) {
        printf("Entry %d: ", i + 1);
        scanf(" %[^\n]", entries[i]); // Read the entire line including spaces
    }

    // Display the entered double strings
    printf("\nList of Double Strings:\n");
    for (int i = 0; i < numEntries; i++) {
        printf("%d. %s\n", i + 1, entries[i]);
    }

    return 0;
}