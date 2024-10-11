#include<stdio.h>

int main()
{
	int mat1[3][3], mat2[3][3], mat3[3][3], mat4[3][3], mat5[3][3] , i,k, j,sum=0;
	
	printf("First array : \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&mat1[i][j]);
			
		}
		
	}
	
	printf("Second array : \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&mat2[i][j]);
			
		}
		
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat3[i][j] = mat1[i][j] + mat2[i][j]; 
		}
		
	}
	
	printf("Sum : \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat3[i][j]); 
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat3[i][j] = 0;
			for(k=0;k<3;k++){
			mat3[i][j] += mat1[i][k] * mat2[k][j]; 				
			}

		}
		
	}
	
	printf("Product : \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("%d ",mat3[i][j]); 
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				sum = sum + mat1[i][j];
			}
		}
	}
	
	printf("Sum of diagonal elements of first matrix is %d \n",sum);
	

	return 0;

}
