#define password 223344
#include <stdio.h>
#include <stdlib.h>

int adminloginsuccess()
{
    FILE *fp;
    char ch[1000];

    fp=fopen("Logs.txt","r");
    while(!feof(fp))
    {
        fgets(ch,1000,fp);
        puts(ch);
    }

    return 0;
}

int adminlog()
{
    int pass;

    printf("Enter Admin Password --> ");
    scanf("%d",&pass);

    if(pass==password)
    {
        adminloginsuccess();
    }
    else{
        printf("Wrong Password");
        return 0;
    }


    return 0;
}

