#include<stdio.h> 
#include <stdlib.h> 
int main() 
{ 
 
FILE *fp; /* file pointer*/char 
fName[20]; 
 
printf("\nEnter file name to create :"); 
scanf("%s",fName); 
 
/*creating (open) a file*/ 
fp=fopen(fName,"w"); 
/*check file created or not*/ 
if(fp==NULL) 
{ 
printf("File does not created!!!");exit(0); 
/*exit from program*/ 
} 
 
printf("File created successfully."); 
/*writting into file*/ 
putc('K',fp); 
putc('A',fp); 
putc('R',fp); 
putc('T',fp); 
putc('I',fp); 
putc('K',fp); 
 
 
printf("\nData written successfully."); 
fclose(fp); 
 
/*again open file to read data*/ 
fp=fopen(fName,"r"); 
if(fp==NULL) 
{ 
printf("\nCan't open file!!!"); 
exit(0); 
} 
 
printf("Contents of file is :\n"); 
printf("%c",getc(fp)); 
printf("%c",getc(fp)); 
printf("%c",getc(fp)); 
printf("%c",getc(fp)); 
printf("%c",getc(fp)); 
printf("%c",getc(fp)); 
printf("%c",getc(fp)); 
 
fclose(fp); 
return 0; 
} 