#include<stdio.h>

main(){
	int r,c,i,j,rc;
	int sum=0;
	printf("enter the array's row :-");
	scanf("%d",&r);
	printf("Enter the array's column :-");
	scanf("%d",&c);
	int a[r][c];
	printf("enter your elements :-\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Elements A[%d][%d] :- \n",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d \n",a[i][j]);
			sum+=a[i][j];
			
		}
	}printf("sum of all elements : %d",sum);
	   
		   
	   
}
