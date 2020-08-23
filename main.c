#include<stdio.h>
#include<stdlib.h>
int main()
{




printf("\033[38;5;9m");  printf(" .d8888b.           888                   888          88\n");printf("\033[0m");
printf("\033[38;5;34m");printf("d88P  Y88b          888                   888          888\n");printf("\033[0m");
printf("\033[38;5;63m");printf("888    888          888                   888          888\n");printf("\033[0m");printf("\033[0m");
printf("\033[38;5;82m");printf("888         8888b.  888  .d8888b 888  888 888  8888b.  888888 .d88b.  888d888\n");printf("\033[0m");
printf("\033[38;5;31m");printf("888            '88b 888 d88P'    888  888 888     '88b 888   d88''88b 888P'\n");printf("\033[0m");
printf("\033[38;5;45m");printf("888    888 .d888888 888 888      888  888 888 .d888888 888   888  888 888\n");printf("\033[0m");
printf("\033[38;5;11m");printf("d88b  d88P 888  888 888 Y88b.    Y88b 888 888 888  888 Y88b. Y88  b8P 888\n");printf("\033[0m");
printf("\033[38;5;48m");printf("~'Y8888P'  'Y888888 888  'Y8888P  'Y88888 888 'Y888888  'Y888 'Y88P'  888\n\n\n");printf("\033[0m");





printf("\033[38;5;48m");printf("                                  ©----------------------------------------®\n");
printf("\033[38;5;82m"); printf("  █████╗ ███╗   ███╗██╗████████╗  |                                        |\n");
printf("\033[38;5;27m");printf(" ██╔══██╗████╗ ████║██║╚══██╔══╝  |  A Simple Addition, Substraction :)    |\n");
printf("\033[38;5;10m");printf(" ███████║██╔████╔██║██║   ██║     | Multiplication and Division Programe :)|\n");
printf("\033[38;5;34m");printf(" ██╔══██║██║╚██╔╝██║██║   ██║     | using c programming :)                 |\n");
printf("\033[38;5;70m");printf(" ██║  ██║██║ ╚═╝ ██║██║   ██|     | Created By Amit Kumar Barik :)         |\n");
printf("\033[38;5;46m");printf(" ╚═╝  ╚═╝╚═╝     ╚═╝╚═╝   ╚═╝     | Instagram -->  _amitbarik              |\n");
printf("\033[38;5;50m");printf("                                  °----------------------------------------°\n\n\n");printf("\033[0m");




int a,b,choice;


printf("\033[38;5;228m");printf("[1] Addition Of Two Numbers :-)\n\n[2] Substraction Of Two Numbers :-)\n\n[3] Multiplication Of Two Numbers :-)\n\n[4] Division Of Two Numbers :-)\n\n");printf("\033[0m");
printf("\033[38;5;197m");printf("[∆] Choose Your Option(1-4):-> ");printf("\033[0m");
scanf("%d" ,&choice);

if (choice<=4)
{
     /* code */
printf("\033[38;5;201m");printf("\n[®] Enter The First Number:-> ");printf("\033[0m");
scanf("%d" , &a);

printf("\033[38;5;201m");printf("\n[®] Enter The Second Nmuber:-> ");printf("\033[0m");
scanf("%d" , &b);
}





switch (choice)
{
case 1:
   printf("\033[38;5;178m"); printf("\nThe Addition of %d and %d is %d\n" , a,b,a+b) ;printf("\033[0m");
     break;

case 2:
    printf("\033[38;5;178m"); printf("The Substraction of %d and %d is %d\n" , a,b,a-b) ;printf("\033[0m");
     break;

case 3:
    printf("\033[38;5;178m"); printf("The Multiplication of %d and %d is %d\n" , a,b,a*b) ;printf("\033[0m");
     break;


case 4:
    printf("\033[38;5;178m"); printf("The Division of %d and %d is %d \nand The Remainder is %d\n" , a,b,a/b,a%b) ;printf("\033[0m");
     break;

default:
printf("\033[38;5;9m");printf("Invalide option\n");printf("\033[0m");
    break;
}


return 0;
}
