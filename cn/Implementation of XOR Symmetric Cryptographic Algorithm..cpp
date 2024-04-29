#include<stdio.h>
#include<bits/stdc++.h> 


void encryptDecrypt(char inpString[]) 
{ 
	
	char xorKey = 'P'; 

 
	int len = strlen(inpString); 

	
	for (int i = 0; i < len; i++) 
	{ 
		inpString[i] = inpString[i] ^ xorKey; 
		printf("%c",inpString[i]); 
	} 
} 


int main() 
{ 
	char sampleString[] = "GeeksforGeeks"; 

	
	printf("Encrypted String: "); 
	encryptDecrypt(sampleString); 
	printf("\n"); 

	
	printf("Decrypted String: "); 
	encryptDecrypt(sampleString); 

	return 0; 
}

