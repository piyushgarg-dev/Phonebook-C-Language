#include <stdio.h>
#include <stdlib.h>
#include "addNewContact.c"
#include "viewContact.c"
#include "searchContacts.c"


int main()
{

    int choice;

    printf("\t\t\t     ==================== \n");
    printf("\t\t\t****| Piyush's PhoneBook |****\n");
    printf("\t\t\t     ==================== \n\n");

    printf("1. Add New Contact \n");
    printf("2. Search Contact With Name \n");
    printf("3. View All Contacts \n\n");
    printf("=>");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: addnewcontact();
        main();
        break;

        case 2: searchcontacts();
        main();
        break;

        case 3: viewcontact();
        main();
        break;
        default: printf("Invalid Option \n\n\n\n\n\n\n\n\n\n");
        
        main();
    }


    printf("\n\n\n\n");
    return 0;
}
