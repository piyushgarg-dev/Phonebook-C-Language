#include <stdio.h>
#include <stdlib.h>

int addnewcontact()
{
    char fname[20]="";
    char lname[20]="";
    long contact;

    FILE *fp;
    FILE *admin;


    printf("\n\n\n");
    printf("\t\t\t     ================= \n");
    printf("\t\t\t****| Add New Contact |****\n");
    printf("\t\t\t     ================= \n\n");

    printf("First Name: \t");
    scanf("%s",fname);
    printf("Last Name: \t");
    scanf("%s",lname);
    printf("Contact Number: \t");
    scanf("%lu",&contact);

    fp=fopen("Contacts.txt","a");
    fprintf(fp,"\n%s %s \t %lu",fname,lname,contact);
    fclose(fp);

    admin=fopen("Logs.txt","a");
    fprintf(admin,"\nDear Piyush, New Entery Found-:");
    fprintf(admin,"\n%s %s \t %lu",fname,lname,contact);
    fclose(admin);

    printf("\n Contact Saved Succesfully");

    






    
    return 0;
}