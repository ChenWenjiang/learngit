/**************************************************************************/
/*	> File Name     : menu.c                                              */
/*  > Author        : xxxx                                                */
/*	> Created Time  : Sun 20 Sep 2015 04:40:02 PM CST                     */
/**************************************************************************/
/****** 
 *version   :0.01
 * */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void MenuVersion(void)
{
    printf("This menu's version is V1.0.\n");
}
void MenuAuthor(void)
{
    printf("The author of this program is XXX\n");
}
void MenuHelp(void)
{
    printf("This is help cmd.\n"
            "version:\tShow the version of this program.\n"
            "author:\t\tThe author of this program is XXX\n"
            "help:\t\thelp\n"
            "contact:\tContact.\n"
            "bug:\t\tShow the bug of this program.\n"
            "man:\t\tShow the detail way to use this program.\n"
            "fun:\t\tkill time.\n"
            "quit:\t\tExit\n");
}
void MenuContact(void)
{
    printf("Email:XXXXXXXXXXXXXXXXX\n"
            "Phone:xxxxxxxxxxx\n");
}
void MenuBug(void)
{
    printf("Bugs are list:\n"
            "1:......\n"
            "2:......\n");
}
void MenuMan(void)
{
    printf("Menual of XXX\n");
}
void MenuFun(void)
{
    printf("Your are fooled!No fun\n");
}
void MenuQuit(void)
{
    exit(EXIT_SUCCESS);
}
int main(void)
{
    char cmd[128];
    while(1)
    {
        scanf("%s",cmd);
        if(strcmp(cmd,"help")==0)
        {
            MenuHelp();
        }
        else if(strcmp(cmd,"quit")==0)
        {
            MenuQuit();
        }
        else if(strcmp(cmd,"version")==0)
        {
            MenuVersion();
        }
        else if(strcmp(cmd,"author")==0)
        {
            MenuAuthor();
        }
        else if(strcmp(cmd,"contact")==0)
        {
            MenuContact();
        }
        else if(strcmp(cmd,"bug")==0)
        {
            MenuBug();
        }
        else if(strcmp(cmd,"man")==0)
        {
            MenuMan();
        }
        else if(strcmp(cmd,"fun")==0)
        {
            MenuFun();
        }
        else
        {
            printf("Wrong cmd!\n");
        }
    }
    return 0;
}
