
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0; //file descripter 

    fd = open("Demo.txt",O_RDONLY);  //open(char *File_name,int MODE)

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