#include <stdio.h>

int main() {
    char weather1, weather2, weather3;

    // Accepting values for weather conditions
    printf("Enter the weather conditions (r for raining, s for sunny, c for cloudy):\n");
    printf("Weather 1: ");
    scanf(" %c", &weather1);  // Add space before %c to ignore any leftover newline character
    printf("Weather 2: ");
    scanf(" %c", &weather2);
    printf("Weather 3: ");
    scanf(" %c", &weather3);

    // Check if it's only sunny or sunny and raining
    if ((weather1 == 's' && weather2 != 'r' && weather3 != 'r') || 
        (weather1 == 's' && (weather2 == 'r' || weather3 == 'r'))) {
        printf("You can go out.\n");
    } else {
        printf("You cannot go out.\n");
    }

    return 0;
}
