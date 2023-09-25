#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

void welcomeScreen(void);
void title(void);
void loading(void);
void loginscreen(void);
void user(void);
void MainMenu(void);


int main()
{
    welcomeScreen();
    MainMenu();
    getch();
}


void welcomeScreen(void)
{
    // Sets the console text and background color.
    system("COLOR 0B");
  /* 0 = Black
 1 = Blue
 2 = Green
 3 = Aqua
 4 = Red
 5 = Purple
 6 = Yellow
 7 = White
 8 = Gray
 9 = Light Blue
 A = Light Green
 B = Light Aqua
 C = Light Red
 D = Light Purple
 E = Light Yellow
 F = Bright White*/


 // Displays a welcome message.
    printf("\n\n\n\n\n\n\n\t\t\t\t**************************************************");
    printf("\n\t\t\t\t\t\t Welcome To \t\t");
    printf("\n\t\t\t\t\t   BUBT management system \t\t");
    printf("\n\t\t\t\t**************************************************");
    printf("\n\n\n\n\t\t\t\t\t");


    // Calls the loading function.
    loading();
}


void title(void)
{
    // Displays a title.
    printf("\n\n\t\t\t\t\t\t*********************************");
    printf("\n\t\t\t\t\t\t*                               *");
    printf("\n\t\t\t\t\t\t*              BUBT             *");
    printf("\n\t\t\t\t\t\t*                               *");
    printf("\n\t\t\t\t\t\t*********************************");
}


void loading(void)
// Displays "loading" with dots to simulate loading.
{
    int i,j,a;
    printf("\n\n\n\t\t\t\t\tloading ");
    for(i=0; i<=10; i++)
    {
        for(j=0; j<100000000; j++)
            a=j;
        printf(".");
    }
}


void loginscreen(void)
{
    // Clears the console screen.
    system("cls");
     // Calls the title function.
    title();
    // Sets the console text color.
    system("COLOR 0A");
    char username[25],password[25];
    char ch;
    int  i;
    while(1)
    {
        printf("\n\n\t\t\tEnter admin username and password=>");
        printf("\n\n\n\n\n\t\t\t\tUsername:");
        scanf("%s",username);
        printf("\n\t\t\t\tPassword:");
        i=0;
        while(1)
        {
            ch=getch();
            if(ch==13)
            {
                break;
            }
            else
            {
                password[i]=ch;
                putch('*');
                i++;
            }
        }
        password[i]='\0';
        printf("\n");
        if(strcmp(username,"BUBT_Panda_Coders")==0 && strcmp(password,"Raihan")==0)
        {
            printf("\n");
            loading();
            break;
        }
        else
        {
            system("COLOR 0C");
            printf("\a\n\t\t\tPlease ensure your password is valid:");
        }
    }
}


void User(void)
{
    // Clears the console screen.
    system("cls");
    int choose;
    // Calls the title function.
    title();
    while(choose!=10)
    {
        printf("\n\n\n\t\t\t\t\t\t\t     <User Handle>\n");
        printf("\n\n\t\t\t\t1.Academic Staff\n");
        printf("\t\t\t\t2.Learners\n");
        printf("\t\t\t\t3.Instructor Aide\n");
        printf("\t\t\t\t4.Workforce\n");
        printf("\t\t\t\t5.Former Students\n");
        printf("\t\t\t\t6.Catalog\n");
        printf("\t\t\t\t7.Dormitory\n");
        printf("\t\t\t\t8.Transport\n");
        printf("\t\t\t\t9.Extracurricular\n");
        printf("\t\t\t\t10.Application Review\n");
        printf("\t\t\t\t0.Main-menu\n\n\n");
        printf("\t\t\t\tMake a Choice (1-10):");
        scanf("%i",&choose);

        switch(choose)
        {
        case 0:

            MainMenu();
            break;
        }
    }
}


void Un_ad(void)
{
    // Clears the console screen.
    system("cls");
     // Sets the console text color.
    system("COLOR 0B");
    // Calls the title function.
    title();
    int choose;
    while(choose!=10)
    {
        printf("\n\n\n\t\t\t\t\t\t       <Administrator>\n");
        printf("\n\n\n\t\t\t\t1.Academic Staff Records\n");
        printf("\t\t\t\t2.Learners Records\n");
        printf("\t\t\t\t3.Instructor Aide Records\n");
        printf("\t\t\t\t4.Workforce Records\n");
        printf("\t\t\t\t5.Former Student Records\n");
        printf("\t\t\t\t6.Catalog Records\n");
        printf("\t\t\t\t7.Dormitory Information\n");
        printf("\t\t\t\t8.Transport Data\n");
        printf("\t\t\t\t9.Extracurricular Groups\n");
        printf("\t\t\t\t10.Application Review Records\n");
        printf("\t\t\t\t0.Administrative Logout...\n\n\n");
        printf("\t\t\t\tMake a Choice (1-10):");
        scanf("%i",&choose);
        switch(choose)
        {
        case 0:
            MainMenu();
            break;
        }
    }
}


void MainMenu(void)
{
    // Clears the console screen.
    system("cls");
    // Calls the title function.
    title();
    int ch;
   while(ch!=2)
    {
        printf("\n\n\n\n\t\t\t\t1.User Handle\n");
        printf("\t\t\t\t2.Administrator\n");
        printf("\t\t\t\t0.Logout...\n\n\n");
        printf("\t\t\t\tPlease indicate your choice (1 or 2):");
        scanf("%i",&ch);
        switch(ch)
        {
        case 0:
            exit(1);
            break;
        case 1:
            User();
            break;
        case 2:
            loginscreen();
            Un_ad();
            break;
        default :
        {
            system("cls");
            printf("\n\t\t\t!!!!Wrong choice");
        }
        printf("\n\t\t\tPass any key to continue............... ");
        }
     }
}
