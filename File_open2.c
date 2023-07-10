
#include<stdio.h>//input output
#include<fcntl.h>///file control open read write function inside in it 
#include<unistd.h>//universal std 
#include<stdlib.h>//malloc free

int main()
{
    int fd = 0; //file descripter 
    char Fname[30]; //char array for accept username name 

    printf("Enter the file name that want open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);  //open(char *File_name,int MODE)

    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }
    else
    {
        printf("file is successfully open with FD %d\n",fd);
    }

    close(fd);

    return 0;
}