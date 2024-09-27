#include<stdio.h>
int main(){
int marks;
printf("Enter your percentage \n");
scanf("%d",&marks);
printf("PERCENTAGE = %d\n",marks);
marks>=90? printf("Grade is A") : marks>=80? printf("Grade is B") :
marks>=70? printf("Grade is C") : marks>=60? printf("Grade is D") :
marks>=50? printf("Grade is E") : printf("Fail");
return 0;
}

