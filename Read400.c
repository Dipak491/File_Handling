
//400
/*

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
    int iRet = 0, iSize =0;

char *Arr = NULL;



    printf("Enter the file name that want open\n");
    scanf(" %s",Fname);

   printf("Enter the number of bytes that you want to read:\n");
    scanf("%d",&iSize);

    Arr =(char *)malloc(iSize); //to aloocate memory 

    fd = open(Fname,O_RDWR);//
    if(fd == -1)
    {
        printf("Unable to create file \n");
        return -1;
    }

    iRet = read(fd,Arr,iSize); //
    printf("%d bytes gets successfully fetched from the file\n",iRet);

    printf("Data from file is :%s\n",Arr);


    
    
    close(fd);
    free(Arr);//to delete memory 

    return 0;
}