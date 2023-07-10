//393 


/*
Create new File

int creat(char *File_name, int Permission)

File_name : Name of file that you want to create 
Permission: Permission for new file (0777)

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

    printf("Enter the file name that want create\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);  //open(char *File_name,int Permission)  0777 means give it all permission 

    if(fd == -1)
    {
        printf("Unable to create file \n");
        return -1;
    }
    else
    {
        printf("file is successfully create with FD %d\n",fd);
    }

    close(fd);

    return 0;
}