//393 


/*
write file

1. open file with RDWR

return value :
*/


#include<stdio.h>//input output
#include<fcntl.h>///file control open read write function inside in it 
#include<unistd.h>//universal std 
#include<stdlib.h>//malloc free

int main()
{
    int fd = 0; //file descripter 
    char Fname[30]; //char array for accept username name 
    int iRet = 0;

    char Arr[] = "abcdefghijklmnopqrstvuwxyz";//data that we want to write in our file 

    printf("Enter the file name that want open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to create file \n");
        return -1;
    }

    iRet = write(fd,Arr,10); //a to z madhli 10 letter lihychi 

    printf("%d bytes gets successfully written in the file\n",iRet);
    

    close(fd);

    return 0;
}