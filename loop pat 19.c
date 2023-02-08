#include<stdio.h>
main(){
	int i,j,k=3;
	
	for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
		printf(" %d",k);
		k=k+1;
	}
	printf("\n");
	}
}
