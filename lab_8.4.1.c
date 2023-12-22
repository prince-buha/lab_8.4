#include<stdio.h>

main(){
	int i,j,r,c,rc;
	float total =0;
	float avg;
	printf("enter the array's row :-");
	scanf("%d",&r);
	printf("enter the array's column :-");
	scanf("%d",&c);
	int a[r][c];
	printf("enter your elements");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf(" \nElements A[%d][%d] \n:-",i,j);
	    scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\n",a[i][j]);
			total+=a[i][j];
		}
		printf("\n");
	}
	rc=r+c;
	avg=total/rc;
	printf("\n avg of the array is : %f",avg);
}

	
		
		
	

