#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "colour.h"

void main(){
    time_t rawtime;
    struct tm *info;
    int choice,choice_2,choice_3,x,m,nm,s,ns,i,cha,o,score=0,hs=0;
    char *wordlist[]={"algorithm","analog","app","application","array","backup","bandwidth","binary","bit","bitmap","bite","blog","blogger","bookmark","boot","broadband","browser","buffer","bug","bus","byte"
,"cache","capslock","captcha","CD","CD-ROM","client","clipart","clip board","cloud","command","compile","compress","computer","configure","cookie","copy","CPU","cybercrime","cyberspace"
,"dashboard","data","database","datamining","debug","decompress","delete","desktop","development","digital","disk","DNS","document","domain","dot","download","drag","DVD"
,"dynamic","e-mail","emoticon","encrypt","encryption","enter","file","firewall","firmware","flaming","flash","USB","Bluray","flowchart"
,"folder","font","format","frame","freeware","gigabyte","graphics","hack","hacker","hardware","homepage","host","html","hyperlink","hypertext","icon","inbox","integer","interface","Internet"
,"IP","iteration","Java","joystick","kernel","key","keyboard","keyword","laptop","link","login","logout","logic","mainframe","macro","malware","media"
,"memory","mirror","modem","monitor","motherboard","mouse","multimedia","net","network","node","notebook","offline","online","open","source","OS","option"
,"output","page","password","paste","path","phishing","piracy","pirate","platform","plug-in","podcast","pop-up","portal","print","printer","privacy","process","program","programmer","protocol"
,"queue","RAM","reboot","resolution","restore","ROM" ,"root","router","runtime","save","scan","scanner","screen","screenshot","script","scroll","space","search","engine","security","server","shareware","shell"
,"shift","snapshot","social","software","spam","spreadsheet","status","storage","spyware","supercomputer","surf","syntax","tag","template","terabyte","terminal","text","thread","toolbar","trash","Trojan","Ubuntu","undo"
,"Unix","upload","UI","username","URL","user","utility","version","virtual","virus","web","website","widget","windows","wireless","workstation","worm","XML","zip"};
    char _e,*ans,*w;
    time(&rawtime);
    info = gmtime(&rawtime );
    m = info->tm_min;
    nm = (info->tm_min)+1;
    ns = info->tm_sec;
    s = info->tm_sec;


   menu:
        textcolor(COLOR_YELLOW, COLOR_RED);
        printf("                                                                                                                       \n");
        resetcolor();
        printf("|||                                                                                                                 |||\n");
        printf("|||");
        textcolor(COLOR_YELLOW, COLOR_BLACK);
        printf("                                                    TYPO ALPHA                                                   ");
        resetcolor();
        printf("|||\n");
        printf("|||                                                                                                                 |||\n");
        printf("|||                                                                                                                 |||\n");
        printf("|||");
        textcolor(COLOR_RED, COLOR_BLACK);
        printf("                                                   1. Start Game                                                 ");
        resetcolor();
        printf("|||\n");
        printf("|||                                                                                                                 |||\n");
        printf("|||                                                                                                                 |||\n");
        printf("|||");
        textcolor(COLOR_RED, COLOR_BLACK);
        printf("                                                      2. Exit                                                    ");
        resetcolor();
        printf("|||\n");
        printf("|||                                                                                                                 |||\n");
        printf("|||                                                                                                                 |||\n");
        printf("|||");
        textcolor(COLOR_GREEN, COLOR_BLACK);
        printf("                                                Press 1,2 to continue                                            ");
        resetcolor();
        printf("|||\n");
        printf("|||                                                                                                                 |||\n");
        textcolor(COLOR_GREEN, COLOR_BLACK);
        printf("                                                            ");
        scanf("%d",&choice);



    switch(choice){

        case 1:
                system("cls");
                mode:
                    score=0;
                    textcolor(COLOR_YELLOW, COLOR_RED);
                    printf("                                                                                                                       \n");
                    resetcolor();
                    printf("|||                                                                                                                 |||\n");
                    printf("|||                                                                                                                 |||\n");
                    printf("|||                                                                                                                 |||\n");
                    printf("|||");
                    textcolor(COLOR_YELLOW, COLOR_BLACK);
                    printf("                                           . . . Please select mode . . .                                        ");
                    resetcolor();
                    printf("|||\n");
                    printf("|||                                                                                                                 |||\n");
                    printf("|||                                                                                                                 |||\n");
                    printf("|||");
                    textcolor(COLOR_RED, COLOR_BLACK);
                    printf("                                                     1. Normal                                                   ");
                    resetcolor();
                    printf("|||\n");
                    printf("|||");
                    textcolor(COLOR_RED, COLOR_BLACK);
                    printf("                                                      2. Hard                                                    ");
                    resetcolor();
                    printf("|||\n");
                    printf("|||                                                                                                                 |||\n");
                    printf("|||                                                                                                                 |||\n");
                    printf("|||");
                    textcolor(COLOR_GREEN, COLOR_BLACK);
                    printf("                                             Press 1 or 2 to select mode                                         ");
                    resetcolor();
                    printf("|||\n");
                    printf("|||");
                    textcolor(COLOR_GREEN, COLOR_BLACK);
                    printf("                                            Press 9 to return to Main Menu                                       ");
                    resetcolor();
                    printf("|||\n");
                    printf("|||");
                    textcolor(COLOR_GREEN, COLOR_BLACK);
                    printf("                                                   Press 0 to Exit                                               ");
                    resetcolor();
                    printf("|||\n");
                    printf("|||                                                                                                                 |||\n");
                    printf("|||                                                                                                                 |||\n");
                    printf("|||");
                    textcolor(COLOR_GREEN, COLOR_BLACK);
                    printf("                                                          ");
                    scanf("%d",&choice_2);

                    switch(choice_2){

                        case 1:
                            m = info->tm_min;
                            nm = (info->tm_min)+1;
                            ns = info->tm_sec;
                            s = info->tm_sec;
                            o = 999;
                            system("cls");
                            for( i = 0; i  >= 0; i++ ){
                                normal1:
                                    cha = (ns+60)-s;
                                    textcolor(COLOR_YELLOW, COLOR_RED);
                                    printf("                                                                                                                       \n");
                                    resetcolor();
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||");
                                    textcolor(COLOR_GREEN, COLOR_BLACK);
                                    printf("                                             You have %2d seconds left                                            ",cha);
                                    resetcolor();
                                    printf("|||\n");
                                    srand(time(NULL));
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||");
                                    textcolor(COLOR_RED, COLOR_BLACK);
                                    printf("                                                     Score %d                                                     ",score);
                                    resetcolor();
                                    printf("|||\n");
                                    w=wordlist[rand()%211];
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    textcolor(COLOR_GREEN, COLOR_BLACK);
                                    printf("                                                        %s\n",w);
                                    resetcolor();
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    textcolor(COLOR_GREEN, COLOR_BLACK);
                                    printf("                                                        ");
                                    scanf("%s",&ans);
                                    x = strcmp(w, &ans);
                                    system("cls");
                                    if(m >= nm){
                                        if( s<= ns){
                                            o = ns;
                                        }
                                        else if(s >= o){
                                            goto end1;
                                            break;
                                        }
                                        else{
                                            time(&rawtime);
                                            info = gmtime(&rawtime );
                                            m = info->tm_min;
                                            s = info->tm_sec;
                                        }
                                    }
                                    if ((m-nm) >= 1 || cha >= 61){
                                        goto end1;
                                        break;
                                    }
                                    else{
                                        time(&rawtime);
                                        info = gmtime(&rawtime );
                                        m = info->tm_min;
                                        s = info->tm_sec;
                                    }
                                    if(x == 0){
                                        score+=1;
                                    }
                                    system("cls");


                            }
                            end1:
                                system("cls");
                                if(score >= hs){
                                    hs = score;
                                }
                                textcolor(COLOR_YELLOW, COLOR_RED);
                                printf("                                                                                                                       \n");
                                resetcolor();
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                     ");
                                textcolor(COLOR_RED, COLOR_YELLOW);
                                printf("Game  Over");
                                resetcolor();
                                printf("                                                  |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                  ");
                                textcolor(COLOR_CYAN, COLOR_DARKYELLOW);
                                printf(" Your score is %d",score);
                                resetcolor();
                                printf("                                               |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                               ");
                                textcolor(COLOR_CYAN, COLOR_DARKYELLOW);
                                printf(" Your high score is %d",hs);
                                resetcolor();
                                printf("                                             |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||");
                                textcolor(COLOR_GREEN, COLOR_BLACK);
                                printf("                                             Press 1 or 2 to select mode                                         ");
                                resetcolor();
                                printf("|||\n");
                                printf("|||");
                                textcolor(COLOR_GREEN, COLOR_BLACK);
                                printf("                                            Press 9 to return to Main Menu                                       ");
                                resetcolor();
                                printf("|||\n");
                                printf("|||");
                                textcolor(COLOR_GREEN, COLOR_BLACK);
                                printf("                                                   Press 0 to Exit                                               ");
                                resetcolor();
                                printf("|||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                textcolor(COLOR_GREEN, COLOR_BLACK);
                                printf("                                                          ");
                                scanf("%d",&choice_3);
                                system("cls");
                                switch(choice_3){
                                    case 1: goto mode;
                                        break;
                                    case 9:
                                        system("cls");
                                        goto menu;
                                        break;

                                    case 0:
                                        system("cls");
                                        textcolor(COLOR_YELLOW, COLOR_RED);
                                        printf("                                                                                                                       \n");
                                        resetcolor();
                                        printf("|||                                                                                                                 |||\n");
                                        printf("|||                                                                                                                 |||\n");
                                        printf("|||                                                                                                                 |||\n");
                                        printf("|||");
                                        textcolor(COLOR_GREEN, COLOR_BLACK);
                                        printf("                                         Are you sure to Exit?(Y/N)                                              ");
                                        resetcolor();
                                        printf("|||\n");
                                        printf("|||                                                                                                                 |||\n");
                                        printf("|||                                                                                                                 |||\n");
                                        printf("|||                                                                                                                 |||\n");
                                        printf("                                                          ");
                                        textcolor(COLOR_GREEN, COLOR_BLACK);
                                        scanf("%s",&_e);
                                        system("cls");
                                        if(_e=='Y'||_e=='y')
                                            exit(0);
                                        if(_e=='N'||_e=='n'){
                                            goto mode;}
                                        break;
                                    }
                            break;

                        case 2:
                            m = info->tm_min;
                            nm = (info->tm_min)+1;
                            ns = info->tm_sec;
                            s = info->tm_sec;
                            system("cls");
                            for( i = 0; i  >= 0; i++ ){
                                hard1:
                                    cha = (ns+60)-s;
                                    textcolor(COLOR_YELLOW, COLOR_RED);
                                    printf("                                                                                                                       \n");
                                    resetcolor();
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||");
                                    textcolor(COLOR_GREEN, COLOR_BLACK);
                                    printf("                                             You have %2d seconds left                                            ",cha);
                                    resetcolor();
                                    printf("|||\n");
                                    srand(time(NULL));
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||");
                                    textcolor(COLOR_RED, COLOR_BLACK);
                                    printf("                                                     Score %d                                                     ",score);
                                    resetcolor();
                                    printf("|||\n");
                                    w=wordlist[rand()%211];
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    textcolor(COLOR_GREEN, COLOR_BLACK);
                                    printf("                                                        %s\n",w);
                                    resetcolor();
                                    printf("|||                                                                                                                 |||\n");
                                    printf("|||                                                                                                                 |||\n");
                                    textcolor(COLOR_GREEN, COLOR_BLACK);
                                    printf("                                                        ");
                                    scanf("%s",&ans);
                                    x = strcmp(w, &ans);
                                    system("cls");
                                    if(m >= nm){
                                        if( s<= ns){
                                            o = ns;
                                        }
                                        else if(s >= o){
                                            goto end2;
                                            break;
                                        }
                                        else{
                                            time(&rawtime);
                                            info = gmtime(&rawtime );
                                            m = info->tm_min;
                                            s = info->tm_sec;
                                        }
                                    }
                                    if ((m-nm) >= 1 || cha >= 61){
                                        goto end2;
                                        break;
                                    }
                                    else{
                                        time(&rawtime);
                                        info = gmtime(&rawtime );
                                        m = info->tm_min;
                                        s = info->tm_sec;
                                    }
                                    if(x == 0){
                                        score+=1;
                                    }
                                    else if( x != 0){
                                        score+=0;
                                        goto end2;
                                        break;
                                    }
                                system("cls");


                            }
                            end2:
                                system("cls");
                                if(score >= hs){
                                    hs = score;
                                }
                                textcolor(COLOR_YELLOW, COLOR_RED);
                                printf("                                                                                                                       \n");
                                resetcolor();
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                     ");
                                textcolor(COLOR_RED, COLOR_YELLOW);
                                printf("Game  Over");
                                resetcolor();
                                printf("                                                  |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                  ");
                                textcolor(COLOR_CYAN, COLOR_DARKYELLOW);
                                printf(" Your score is %d",score);
                                resetcolor();
                                printf("                                               |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                               ");
                                textcolor(COLOR_CYAN, COLOR_DARKYELLOW);
                                printf(" Your high score is %d",hs);
                                resetcolor();
                                printf("                                             |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||");
                                textcolor(COLOR_GREEN, COLOR_BLACK);
                                printf("                                             Press 1 or 2 to select mode                                         ");
                                resetcolor();
                                printf("|||\n");
                                printf("|||");
                                textcolor(COLOR_GREEN, COLOR_BLACK);
                                printf("                                            Press 9 to return to Main Menu                                       ");
                                resetcolor();
                                printf("|||\n");
                                printf("|||");
                                textcolor(COLOR_GREEN, COLOR_BLACK);
                                printf("                                                   Press 0 to Exit                                               ");
                                resetcolor();
                                printf("|||\n");
                                printf("|||                                                                                                                 |||\n");
                                printf("|||                                                                                                                 |||\n");
                                textcolor(COLOR_GREEN, COLOR_BLACK);
                                printf("                                                          ");
                                scanf("%d",&choice_3);
                                system("cls");
                                switch(choice_3){
                                    case 1: goto mode;
                                        break;
                                    case 9:
                                        system("cls");
                                        goto menu;
                                        break;

                                    case 0:
                                        system("cls");
                                        textcolor(COLOR_YELLOW, COLOR_RED);
                                        printf("                                                                                                                       \n");
                                        resetcolor();
                                        printf("|||                                                                                                                 |||\n");
                                        printf("|||                                                                                                                 |||\n");
                                        printf("|||                                                                                                                 |||\n");
                                        printf("|||");
                                        textcolor(COLOR_GREEN, COLOR_BLACK);
                                        printf("                                        Are you sure to Exit?(Y/N)                                               ");
                                        resetcolor();
                                        printf("|||\n");
                                        printf("|||                                                                                                                 |||\n");
                                        printf("|||                                                                                                                 |||\n");
                                        printf("|||                                                                                                                 |||\n");
                                        printf("                                                          ");
                                        textcolor(COLOR_GREEN, COLOR_BLACK);
                                        scanf("%s",&_e);
                                        system("cls");
                                        if(_e=='Y'||_e=='y')
                                            exit(0);
                                        if(_e=='N'||_e=='n'){
                                            goto mode;}
                                        break;
                                    }
                            break;

                        case 9:
                            system("cls");
                            goto menu;
                            break;

                        case 0:
                            system("cls");
                            textcolor(COLOR_YELLOW, COLOR_RED);
                            printf("                                                                                                                       \n");
                            resetcolor();
                            printf("|||                                                                                                                 |||\n");
                            printf("|||                                                                                                                 |||\n");
                            printf("|||                                                                                                                 |||\n");
                            printf("|||");
                            textcolor(COLOR_GREEN, COLOR_BLACK);
                            printf("                                         Are you sure to Exit?(Y/N)                                              ");
                            resetcolor();
                            printf("|||\n");
                            printf("|||                                                                                                                 |||\n");
                            printf("|||                                                                                                                 |||\n");
                            printf("|||                                                                                                                 |||\n");
                            printf("                                                          ");
                            textcolor(COLOR_GREEN, COLOR_BLACK);
                            scanf("%s",&_e);
                            system("cls");
                            if(_e=='Y'||_e=='y'){
                                exit(0);}
                            if(_e=='N'||_e=='n'){
                                goto mode;}
                            break;

                        }

                break;

        case 2:
                system("cls");
                textcolor(COLOR_YELLOW, COLOR_RED);
                printf("                                                                                                                       \n");
                resetcolor();
                printf("|||                                                                                                                 |||\n");
                printf("|||                                                                                                                 |||\n");
                printf("|||                                                                                                                 |||\n");
                printf("|||");
                textcolor(COLOR_GREEN, COLOR_BLACK);
                printf("                                         Are you sure to Exit?(Y/N)                                              ");
                resetcolor();
                printf("|||\n");
                printf("|||                                                                                                                 |||\n");
                printf("|||                                                                                                                 |||\n");
                printf("|||                                                                                                                 |||\n");
                printf("                                                          ");
                textcolor(COLOR_GREEN, COLOR_BLACK);
                scanf("%s",&_e);
                system("cls");
                if(_e=='Y'||_e=='y'){
                    exit(0);}
                if(_e=='N'||_e=='n'){
                    goto menu;}
                break;
    }
}
