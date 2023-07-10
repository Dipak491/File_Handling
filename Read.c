
//397
/*
Read the ddata from the file 
int read = (int)

1. 

return value :
*/


#include<stdio.h>//input output
#include<fcntl.h>///file control open read write function inside in it 
#include<unistd.h>//universal std 
#include<stdlib.h>//malloc free
#include<string.h>

int main()
{
    int fd = 0; //file descripter 
    char Fname[30]; //char array for accept username name 
    int iRet = 0;

    char Arr[50] = {'\0'};// intialize to avoid garbage value  

    printf("Enter the file name that want open\n");
    scanf(" %s",Fname);



    fd = open(Fname,O_RDWR);//
    if(fd == -1)
    {
        printf("Unable to create file \n");
        return -1;
    }

    iRet = read(fd,Arr,5); //strlen(arr) write data = size of array 
    printf("%d bytes gets successfully fetched from the file\n",iRet);

    printf("Data from file is :%s\n",Arr);


    

    close(fd);

    return 0;
}