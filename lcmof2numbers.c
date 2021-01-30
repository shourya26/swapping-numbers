#include <stdio.h> 


int Min(int Num1, int Num2) 
{ 
	return Num1 >= Num2 
			? Num2 
			: Num1; 
} 


int LCMUtil(int Num1, int Num2, int K) 
{ 
	
	if (Num1 == 1 || Num2 == 1) 
		return Num1 * Num2; 

	
	if (Num1 == Num2) 
		return Num1; 

	
	if (K <= Min(Num1, Num2)) { 

	
		if (Num1 % K == 0 && Num2 % K == 0) { 

			
			return K * LCMUtil( 
						Num1 / K, Num2 / K, 2); 
		} 

	
		else
			return LCMUtil(Num1, Num2, K + 1); 
	} 


	else
		return Num1 * Num2; 
} 


void LCM(int N, int M) 
{ 
	
	int lcm = LCMUtil(N, M, 2); 

	
	printf("%d", lcm); 
} 


int main() 
{ 
	
	int N = 12, M = 30; 

	
	LCM(N, M); 

	return 0; 
}

