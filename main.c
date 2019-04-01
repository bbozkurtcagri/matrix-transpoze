#include <stdio.h>


int main() {
	int row,column,i,j,m;
	int matrix[3][3]={{2,3,4},{6,7,8},{10,11,12}};
/*	printf("Please enter the row number:");
	scanf("%d",&row);
	printf("Please enter the column number:");
	scanf("%d",&column);
	
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("Please enter the values for matrix:");
			scanf("%d",&matrix[i][j]);
		}
	}*/
  
	printf("MATRIX:");
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",matrix[i][j]);
		}
	printf("\n");
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=i;j<3;j++){
			m = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = matrix[i][j];
			matrix[j][i] = m;
		}
	}
	printf("\nMatrix transpose:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",matrix[i][j]);
		}
	printf("\n");
	}
	
	return 0;
}
