#include<stdio.h>

main(){
	int r,c,i,j;
	
	
	
	printf("enter the array's row:- ");
	scanf("%d",&r);
	printf("enter the array's column:- ");
	scanf("%d",&c);
	int a[r][c];
	int b[r][c];
	int d[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Elements A[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Elements B[%d][%d] :- ",i,j);
			scanf("%d",&b[i][j]);
		}
}
printf("Sum is as Below:- \n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
	
		d[i][j]=a[i][j]+b[i][j];
		printf("%d ",d[i][j]);
	}
	printf("\n");
}




}
