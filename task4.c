#include <stdio.h>
int main(){
	int cities_population [10];
        int sum=0;
        float avg;
	int max_population=0;
	int min_population=0;
	int i=0;
	for(i=0; i<10; i++){
			printf("Enter populaion of city no. %d:   ",(1+ i));
                        scanf("%d", &cities_population [i]);
                        sum+=cities_population [i];}
	 i=0;
			max_population=cities_population[0];
			min_population=cities_population[0];
	for(i=0; i<10; i++){
			if(max_population<cities_population [i])
				max_population=cities_population[i];
			
			if(min_population>cities_population [i])
                                min_population=cities_population[i];
			
			}
	for(int j=9; j>=0; j--){
	printf("%d  ", cities_population [j]);
	}

     avg=sum/10;
        printf("\nThe sum is:  %d ", sum);
        printf("\nThe average is:  %.2f ", avg);
   printf("\nmax population is:  %d ", max_population);
   printf("\nmin population:  %d \n", min_population);

return(0);

}

