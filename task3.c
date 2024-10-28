#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
int main() {
    int grid_size = 10;  // Asummed (10 rows and 10 columns)
    int treasure_x, treasure_y;  

    
    srand(time(0));
  
    treasure_x =rand() % grid_size; 
    treasure_y = rand() % grid_size; 

        char direction;
	int x=1;
	int y=1;
    while (1) {
        // Input the direction from the user
        printf("Enter direction to search: U D R L    ");
        scanf(" %c", &direction);


        if (direction == 'U' || direction == 'u') {
		if(y!=1)
	    		y--; // Move Up
	         else
			 printf("Error! you reached the end, Enter another Direction\n");
        } else if (direction == 'D' || direction == 'd') {
           if (y!=10)
		   y++; // Move Down
	  else
                         printf("Error! you reached the end, Enter another Direction\n");

        } else if (direction == 'L' || direction == 'l') {
		if (x!=1)
	    		x--; // Move Left
		  else
                         printf("Error! you reached the end, Enter another Direction\n");

               } else if (direction == 'R' || direction == 'r') {
		       if(x!=10)
		   	       x++; // Move Right
			  else
                         printf("Error! you reached the end, Enter another Direction\n");

        } else {
            printf("Invalid direction! Please enter U, D, L, or R.\n");
            continue;
        }

	//check if we found the treasure
	if(x==treasure_x && y==treasure_y){
		printf("Congrats!! you found the tressure");
	break;}
    }

    return 0; 
}
