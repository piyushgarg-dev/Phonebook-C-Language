#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int searchcontacts()
{
    FILE *fp;
    char name[50]="";
    char ch[1000];
    int x;


    printf("\t\t\t     ================ \n");
    printf("\t\t\t****| Search Contact |****\n");
    printf("\t\t\t     ================ \n\n");

    printf("Enter FirstName: \t");
    scanf("%s",name);

    fp=fopen("Contacts.txt","r");
    printf("First Name \t lastname \t Contact");
    while(!feof(fp))
    {
        fgets(ch,1000,fp);
        x=strcmp(ch,name);
        if(x==0)
        {

            puts(ch);
        }
    }
    fclose(fp);


printf("\n\n\n\n\n");

    return 0;
}