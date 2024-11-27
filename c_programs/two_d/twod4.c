#include <stdio.h>

int main() {
    int n;

   
    printf("Enter the number of players: ");
    scanf("%d", &n);

    int scores[n], sum = 0;

   
    printf("Enter the scores of the players:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter score for player %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }

    
    printf("The total sum of all players' scores is: %d\n", sum);

    return 0;
}
