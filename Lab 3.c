#include <stdio.h>
#include "FUNCTIONS.H"

int main()
{
	
	char array[9] = {'a','s','d','a','s','d','a','s','d'};
	char array2[9];
	*array2=encryptText(array, 9, 4);
	printf("%s", array2);
	getchar();
	

	
	return 0;
}