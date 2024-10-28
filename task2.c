#include <stdio.h>

int main() {
    int minutes, seconds, total_minutes;
    
    printf("Enter the number of minutes: ");
    scanf("%d", &total_minutes);

    for(minutes = 0; minutes < total_minutes; minutes++) {
        for(seconds = 0; seconds < 60; seconds++) {
            // Print the time in MM:SS format
            printf("%02d : %02d\n", minutes, seconds);
        }
    }
   
    printf("Stopwatch has completed %d minute(s).\n", total_minutes);
    
    return 0;
}
