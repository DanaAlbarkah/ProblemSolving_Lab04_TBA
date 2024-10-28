#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   
int main() {
    int R[10][10], G[10][10], B[10][10];  // Separate 2D arrays for Red, Green, and Blue values
    float grayscale[10][10];  // 2D array for grayscale values
    srand(time(0));
    // Step 1: Fill the image with random values
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            R[i][j] = rand() % 256; 
            G[i][j] = rand() % 256; 
            B[i][j] = rand() % 256; 
        } }
    // Step 2: Convert the RGB values to grayscale using the formula on the lab
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) 
            grayscale[i][j] = 0.299 * R[i][j] + 0.587 * G[i][j] + 0.114 * B[i][j];
            }  
    printf("RGB values and their corresponding Grayscale values:\n\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("Pixel (%d, %d): R=%d, G=%d, B=%d -> Grayscale=%.2f\n", i, j, R[i][j], G[i][j], B[i][j], grayscale[i][j]);
        } }
    return 0;
}
