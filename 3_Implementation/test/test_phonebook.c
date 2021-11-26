#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct person
{
    char name[35];
    char address[50];
     char father_name[35];
     char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char citision_no[20];

    };
//All function declaration
void menu();
void got();
void start();
void back();
void addrecord();
//Program starts here
int main()
{
    system("color 0f");
    start();
    return 0;
}
//To go back to main function to start again
void back()
{
    start();
}
//To start the main function
void start()
{
    //To print the menu function
    menu();
}
void menu()
{
    system("cls");
printf("\t\t**WELCOME TO PHONEBOOK**");
printf("\n\n\t\t\t  MENU\t\t\n\n");
printf("\t1.Add New   \t2.List   \t3.Exit  \n\t4.Modify \t5.Search\t6.Delete");

menu();
}
        //This function used for adding individual or multiple records
        void addrecord()
{
        system("cls");
        FILE *f;
        struct person p;
        //used to open a file to perform various operations 
        f=fopen("project","ab+");
        printf("\n Enter name: ");
        //Declaring library function 
        got(p.name);
        printf("\nEnter the address: ");
        got(p.address);
        printf("\nEnter father name: ");
        got(p.father_name);
        printf("\nEnter mother name: ");
        got(p.mother_name);
        printf("\nEnter phone no.:");
        scanf("%ld",&p.mble_no);
        printf("Enter sex:");
        got(p.sex);
        printf("\nEnter e-mail:");
         got(p.mail);
        printf("\nEnter citizen no:");
        got(p.citision_no);
        //function writes the data specified by the void pointer 
        fwrite(&p,sizeof(p),1,f);
      
      //used for output stream to buffer
      fflush(stdin);
        printf("\nrecord saved");
//deletes all buffers that are associated with the stream before closing it
fclose(f);

    printf("\n\nEnter any key");

	 getch();
    system("cls");
    menu();
}


