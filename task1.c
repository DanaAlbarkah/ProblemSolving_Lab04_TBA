#include <stdio.h>
int main(){
	int N, i, j;

	printf("Enter the number of rows:  ");
	scanf("%d", &N);
//part a
//alligned left using for
	printf("left alligned using for loop\n");
	
	for (i=1 ; i<=N; i++){
		for(j=1 ;j<= N-i; j++)
		printf(" ");

	for (j=1; j<=i; j++)
		printf("*");
		printf("\n");

	}

//centered using for
printf("centered using for loop\n");
   for (i=1 ; i<=N; i++){
                for(j=1 ;j<= N-i; j++)
                printf(" ");

        for (j=1; j<=2*i-1; j++)
                printf("*");
                printf("\n");




        }
//Part b (while loops)
//left alligned
printf("left alligned using while loop\n");

i=1;
	   while(i<=N){
		   
		   j=1;
		   while(j<=N-i){
		 printf(" ");   
		j++;   }


		   j=1;
		   while(j<=i){
			   printf("*");
		   j++;}
		   printf("\n");
i++;}

//centered
printf("Centerd using while loop\n");

i=1; 
           while(i<=N){
                   
                   j=1;
                   while(j<=N-i){
                 printf(" ");   
                j++;   }


                   j=1;
                   while(j<=2*i-1){
                           printf("*");
                   j++;}         
	 
		   printf("\n");
i++;}



	   
	
	
	
	
		   return(0);}
