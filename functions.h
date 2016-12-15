#ifndef FUNCTIONS_H
#define FUNCTIONS_H

char* encryptText(char *plainText, int arrLength, int key);

char* decryptText(char *cipherText, int arrLength, int key);

char* readFromFile(char fileName[]);void writeToFile(char fileName[], char text[]);

#endif