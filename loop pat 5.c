#include<stdio.h>
main(){
	int i,j;
	
	for(i=5; i>=1;i--){
	for(j=i; j<=5; j++)	{
		if(i%2==0){
			printf(" |");
		}
		else{
			printf(" - ");
		}
		printf("",j);
	}
	printf("\n");
	}
}
