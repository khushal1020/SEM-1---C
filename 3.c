// Type your content here...
#include <stdio.h>
int main (){
	int num1, num2;
	printf("Enter numbers: ");
	scanf("%d %d",&num1,&num2);
	if(num1>0 && num2>0){
		printf("Both are positive\n");
}else{
		printf("Both are not positive\n");
}
	if(num1 == 5||num2 == 5){
		printf("%d or %d = 5\n",num1,num2);
		}else{
		printf("%d,%d != 5\n", num1, num2);
		}
	if(!(num1>10)){
		printf("%d <= 10\n", num1);
		}else{
		printf("%d > 10\n",num1);
		}

	return 0;
}