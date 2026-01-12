#include <stdio.h>

// Function to calculate simple interest
int calculateSimpleInterest(int principal, int time, int rate) {
	int simpleInterest;
    simpleInterest = (principal * time * rate) / 100;
    return simpleInterest;

}



int main() {
	int principal, time, rate, simpleInterest;
    
    // Read the number of principal, time, and rate from the user
   
    scanf("%d", &principal);
    
   
    scanf("%d", &time);
    
    
    scanf("%d", &rate);
	// Calculate the simple interest
	simpleInterest = calculateSimpleInterest(principal, time, rate);
	
	// Print the result
	printf("%d\n", simpleInterest);
	
	return 0;
}
