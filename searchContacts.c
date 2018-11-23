#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int searchcontacts()
{
    FILE *fp;
    char name[50]="";
    char ch[1000];
    int x;
    char *p;
    int total=0;


    printf("\t\t\t     ================ \n");
    printf("\t\t\t****| Search Contact |****\n");
    printf("\t\t\t     ================ \n\n");

    printf("Enter FirstName: \t");
    scanf("%s",name);

    fp=fopen("Contacts.txt","r");
    printf("Name \t\t Contact");
    while(!feof(fp))
    {
        fgets(ch,1000,fp);
        p=strstr(ch,name);
        if(p)
        {
            printf("\n");
            puts(ch);
            total++;
        }
    }
    fclose(fp);

printf("\n Total Entries --> %d",total);
printf("\n\n\n");

    return 0;
}
