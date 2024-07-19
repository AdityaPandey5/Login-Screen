//LOGIN SCREEN
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main ()
{
    char ch;
    char pass[20];
    char saved_pass[20];
start:

    printf(" Enter your password : ");
    int i=0;
    while (1)
    {
        ch=getch();
        if(ch==13)
        {
            pass[i]='\0';
            break;
        }
        else
        {
            pass[i++]=ch;
            printf("*");
        }
    }
    printf("You entered : %s\n",pass);

    FILE *ptr ;
    ptr=fopen("password.txt","r");
    fscan(ptr,"%s",saved_pass);
    fclose (ptr);
    printf("Saved Password %s\n", saved_pass);
    int l = strcmp(pass, saved_pass);   
    if (l==0)
    {
        printf("\n LOGIN SUCCESSFUL");
    }
    else
    {
        printf("\n INCORRECT PASSWORD");
    }
    goto start ;
    return 0;
    
}