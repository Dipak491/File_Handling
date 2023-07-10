
/*
DElete the file 

remove(FileName)
 
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
    char FileName[50];
    
    printf("Enter the file that you want to delete\n");
    scanf("%s",FileName);

    remove(FileName);

    return 0;
}