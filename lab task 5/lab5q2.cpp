#include<stdio.h>
int main(){
	int ang1, ang2, ang3;
	printf("Enter three angles of the triangle\n");
	scanf("%d%d%d",&ang1,&ang2,&ang3);
	if (ang1>0 && ang2>0 && ang3>0 ){
		
		if((ang1 + ang2 + ang3)==180){
			printf("This is a triangle\n");
		}
		else
			printf("This is not a triangle");
	}
	else 
		printf("Invalid angle");
	return 0;
}
