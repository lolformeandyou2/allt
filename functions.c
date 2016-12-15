#include <stdlib.h>

//En cool kommentar

char* encryptText(char *plainText, int arrLength, int key)
{
	int temp;
	char *returnText=NULL;
	returnText = (char*)malloc(sizeof(char) * arrLength);

	for (int i = 0 ; i < arrLength ; i++)
	{
		temp = *plainText;
		temp + key;
		*returnText = temp;
		returnText++;
		plainText++;
	}
	return *returnText;
}

/*
char* decryptText(char *cipherText, int arrLength, int key)
{

}
char* readFromFile(char fileName[]){}void writeToFile(char fileName[], char text[]){}*/