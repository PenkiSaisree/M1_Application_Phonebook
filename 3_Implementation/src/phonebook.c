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
