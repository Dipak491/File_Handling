
//395
/*
write dynamicallay  file

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

    char Arr[50];// 

    printf("Enter the file name that want open\n");
    scanf(" %s",Fname);

    printf("Enter the data that you want to write into the file\n");
    scanf(" %[^'\n']s",Arr);

    fd = open(Fname,O_RDWR | O_APPEND);//o_append add text to last 
    if(fd == -1)
    {
        printf("Unable to create file \n");
        return -1;
    }

    iRet = write(fd,Arr,strlen(Arr)); //strlen(arr) write data = size of array 
    printf("%d bytes gets successfully written in the file\n",iRet);
    

    close(fd);

    return 0;
}