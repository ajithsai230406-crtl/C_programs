#include<stdio.h>
int main()
{
    FILE *file;
    char data[100];

    //Open a file for writing

    file = fopen("abc.txt","w");
    if(file == NULL)
       {
           printf("Error opening file!\n");
           return 1;
       }
    //Writing data to a file

    fprintf(file,"Hello,World!\n");
    fputs("This is a simple File handling example\n",file);

    //close a file

    fclose(file);

    //OPen a file for reading

    file = fopen("abc.txt","r");
    if(file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    //Read data from file

    while(fgets(data,100,file) != NULL )
    {
        printf("%s",data);
    }

    //close file

    fclose(file);

return 0;












}

