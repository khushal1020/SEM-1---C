#include <stdio.h>

int main() {
	int n1,n2;
	printf("Enter two numbers: ");
	scanf("%d%d" , &n1,&n2);
	if(n1<n2)
		printf("%d < %d: True\n",n1,n2);
	
	else
		printf("%d < %d: False\n",n1,n2);
	
	if(n1<=n2)
		printf("%d <= %d: True\n",n1,n2);
	
	else
		printf("%d <= %d: False\n",n1,n2);
		
	
	if(n1>n2)
		printf("%d > %d: True\n",n1,n2);
	
	else
		printf("%d > %d: False\n",n1,n2);

	if(n1>=n2)
		printf("%d >= %d: True\n",n1,n2);
	
	else
		printf("%d >= %d: False\n",n1,n2);
	
		if(n1==n2)
		printf("%d == %d: True\n",n1,n2);
	else 
			printf("%d == %d: False\n",n1,n2);
	
		if(n1!=n2)
			printf("%d != %d: True\n",n1,n2);
		
				  else
			printf("%d != %d: False\n",n1,n2);
			
				   
	return 0;
	}
		
	
		
	
