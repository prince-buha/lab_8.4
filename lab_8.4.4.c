#include<stdio.h>

main(){
	int i,j,r,c,max,min;
	printf("enter the array's row");
	scanf("%d",&r);
	printf("enter the array's column");
	scanf("%d",&c);
	int a[r][c];
	printf("enter your elements:- \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Elements A[%d][%d] :- \n",i,j);
			for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	
		printf("Enter a[%d][%d]:- ",i,j);
		scanf("%d",& a[i][j]);
		}
	}
	max= a[0][0];
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}

printf("\n maximum number is :- %d",max);
	
	
		min= a[0][0];
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(min>a[i][j]){
				min=a[i][j];
			}
		}
	}

printf("\n  manimum number is :- %d",min);
	
	
	
}
		}
	}
	
	

