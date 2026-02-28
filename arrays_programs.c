//Program - 1
#include<stdio.h>
int main()
{
    int i,arr[ ] = {12,4543,543,524,3543};
    printf("\n\nThe elements before change\n");
    printf("\nThe array elements are straight : ");
    for(i = 0;i<5;i++)
    {
        printf("%d, ",arr[i]);
    }
        printf("\nThe array elements are reverse : ");
    for(i = 4;i>=0;i--)
    {
        printf("%d, ",arr[i]);
    }
    arr[0] = 13;
    printf("\nArray of element 1 is %d",arr[0]);
     arr[1] = 2345;
    printf("\nArray of element 2 is %d",arr[1]);
     arr[2] = 5432;
    printf("\nArray of element 3 is %d",arr[2]);
     arr[3] = 3848;
    printf("\nArray of element 4 is %d",arr[3]);
     arr[4] = 675384;
    printf("\nArray of element 5 is %d",arr[4]);

    printf("\n\nThe elements after change\n");
    printf("\nThe array elements are straight : ");
    for(i = 0;i<5;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\nThe array elements are reverse : ");
    for(i = 4;i>=0;i--)
    {
        printf("%d, ",arr[i]);
    }
    arr[0] = 12;
    printf("\nArray of element 1 is %d",arr[0]);
     arr[1] = 4543;
    printf("\nArray of element 2 is %d",arr[1]);
     arr[2] = 543;
    printf("\nArray of element 3 is %d",arr[2]);
     arr[3] = 524;
    printf("\nArray of element 4 is %d",arr[3]);
     arr[4] = 3453;
    printf("\nArray of element 5 is %d",arr[4]);

    printf("\n\nSize of the array is : ");
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d",size);

    printf("\n\nThe addresses of the elements are ");
    int *add = &arr[0];
    printf("%p\n",arr);
    printf("%p",add);

    for(i = 0;i<4;i++)
    {
        printf("\n");
    }
    return 0;
}

//Program - 2
#include<stdio.h>
int main()
{
    int arr[5] = {134,543,76543,0,0};
     arr[3] = 14;
    arr[4] = "Ajith";
    printf("Array[1] : %d\n",arr[0]);
    printf("Array[2] : %d\n",arr[1]);
    printf("Array[3] : %d\n",arr[2]);
    printf("Array[4] : %d\n",arr[3]);
    printf("Array[5] : %s\n",arr[4]);
//array doesn't allow non - homogeneous elements but explicitly allows to store char elements in them.
    printf("The array elements are : ");
    for(int i = 0;i<5;i++)
    {
        printf("%d,",arr[i]);
    }

}

//Program - 3
#include<stdio.h>
#include<string.h>

struct A
{
    int var;
};

int main( )
{
    struct A arr[2];

    arr[0] . var = 10;
    arr[1] . var = 23;

    for(int i = 0;i<2;i++)
    {
        printf("%d, ",arr[i] . var);
    }
    return 0;
}

//Program - 4
#include<stdio.h>

struct A
{
    int var;
    char c[10];
    float dec;
};

int main()
{
    int i;
    struct A arr1[2] = {{1,"aj",1.43},{3,"dk",2.43}};
    struct A arr2[2] = {{112,"AKlX",0.123},{345,"HFDQ",8.453}};
    struct A arr3[2] = {{.var = 781,.c = "PWS",.dec = 1234.321},{.var = 33,.c = "iqjxn",.dec = .990}};

    for(i = 0;i<2;i++)
    {
        printf("%d  %s  %.4f\n\n",arr1[i].var,arr1[i].c,arr1[i].dec);
    }
    for(i = 0;i<2;i++)
    {
        printf("%d  %s  %.4f\n\n",arr2[i].var,arr2[i].c,arr2[i].dec);
    }
    for(i = 0;i<2;i++)
    {
        printf("%d  %s  %.4f\n\n",arr3[i].var,arr3[i].c,arr3[i].dec);
    }

    return 0;
}

//Program - 5

#include<stdio.h>

struct student
{
    char name[10];
    int age;
    float marks;
};

int main()
{
    struct student stu[3] = {
        {"Krishna" , 20 , 65.5},
        {"Radha" , 32 , 78.4},
        {"Balaram" , 40 , 86.2}
    };
    for(int i = 0;i<3;i++)
    {
        printf("\nStudent %d : \n",i+1);
        printf("Name : %s\n",stu[i].name);
        printf("Age : %d\n",stu[i].age);
        printf("Marks : %.3f\n",stu[i].marks);
    }
    printf("\nThe size of structured array is :%ld bytes",sizeof(stu));

    return 0;
}

//Program - 6
 #include<stdio.h>

int main( )
{
    int var1 = 123,var2 = 345,var3 = 678;

    int * ptr_arr[3] = {&var1,&var2,&var3};

    for(int i = 0; i < 3; i++)
    {
        printf("Value of var - %d : %d\t Address : %p\n",i+1,*ptr_arr[i],ptr_arr[i]);
    }
    char arr[3][10] = {"Ajith" , "Sai" , "KM"};
     printf("\nString array elements are : ");

     for(int i = 0;i<3;i++)
     {
         printf("%s, ",arr[i]);
     }
     printf("\n");
     for(int i = 0;i<3;i++)
     {
         printf("\nAddress of arr[%d]: %p\n",i,(void *)arr[i]);
     }
     return 0;
}

//Program - 6
#include<stdio.h>
#include<string.h>

void reverse(char * s)
{
    int  n =  strlen(s);
    for(int i = 0;i<n/2;i++)
    {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
}
int main()
{
    char s[ ] = "Ajithsai";
    printf("%s\n",s);
    reverse(s);
    printf("%s\n",s);
    return 0;
}
s
