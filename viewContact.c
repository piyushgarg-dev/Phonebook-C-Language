#include <stdio.h>
#include <stdlib.h>

int viewcontact()
{
    char ch[1000];
    FILE *fp;
    FILE *admin;

    printf("\n\n\n");
    printf("\t\t\t     ================= \n");
    printf("\t\t\t****|   View Contact  |****\n");
    printf("\t\t\t     ================= \n\n");

    fp=fopen("Contacts.txt","r");
    while(!feof(fp))
    {
        fgets(ch,1000,fp);
        puts(ch);
    }
    fclose(fp);
    admin=fopen("Logs.txt","a");
    fprintf(admin,"\nDear Piyush, New Log Found-:");
    fprintf(admin,"\nAll Contacts Have Been Viewed");
    fclose(admin);








    return 0;
}