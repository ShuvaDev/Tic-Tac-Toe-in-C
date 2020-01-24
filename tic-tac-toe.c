// Hare krishna
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

#define ERROR "INVALID INPUT\n"
static int error;
static int scount;
char board[3][3]={
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
    };
void drawBoards(void);
void storeInput(int,char);
bool checkInput(char);
int checkWin(void);
void validArray(void);
int main()
{
    int count=1,con;
    char in;
    drawBoards();
    for(;;)
    {
        if(count%2==1)
        {
            printf("1st player's turn!\n");
        }
        else{
            printf("2nd player's turn!\n");
        }
        printf("Enter your box choice...\n");
        scanf("%c",&in);
        if(checkInput(in))
        {
            error=0;
            storeInput(count,in);
            int chkwin=checkWin();
            system("CLS");
            drawBoards();
            if(chkwin==3)
            {
                printf("\n\t\t\tMatch Drawn!\n");
                printf("Press 1 for continue...\n");
                scanf("%d",&con);
                fflush(stdin);
                if(con==1)
                {
                    scount=0;
                    validArray();
                    count=1;
                }else{
                    break;
                }
            }else if(chkwin==1)
            {
                printf("\n\t\t\tPlayer 1 win!\n");
                printf("Press 1 for continue...\n");
                scanf("%d",&con);
                fflush(stdin);
                if(con==1)
                {
                    scount=0;
                    validArray();
                    count=1;
                }else{
                    break;
                }
            }else if(chkwin==2)
            {
                printf("\n\t\t\tPlayer 2 win!\n");
                printf("Press 1 for continue...\n");
                scanf("%d",&con);
                fflush(stdin);
                if(con==1)
                {
                    scount=0;
                    validArray();
                    count=1;
                }else{
                    break;
                }
            }
            else{
                count=count+1;
            }
        }else{
            error=1;
            system("CLS");
            drawBoards();
        }
        fflush(stdin);
    }
    system("PAUSE > null");
    return 0;
}
void validArray()
{
    board[0][0]='1';
    board[0][1]='2';
    board[0][2]='3';

    board[1][0]='4';
    board[1][1]='5';
    board[1][2]='6';

    board[2][0]='7';
    board[2][1]='8';
    board[2][2]='9';
    system("cls");
    drawBoards();
}
void drawBoards()
{
    system("COLOR 1f");
    printf("\n%38s","TIC-TAC-TOE\n");
    printf("%47s","Player 1 - (x)  Player 2 - (o)\n");
    puts("");
    printf("\t\t\t  %c | %c | %c \n",board[0][0],board[0][1],board[0][2]);
    printf("\t\t\t--------------\n");
    printf("\t\t\t  %c | %c | %c \n",board[1][0],board[1][1],board[1][2]);
    printf("\t\t\t--------------\n");
    printf("\t\t\t  %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
    if(error==1)
    {
        printf("\n%s",ERROR);
    }
}
bool checkInput(char in)
{
    if(in>='1' && in<='9')
    {
        switch(in)
        {
        case '1':
            if(board[0][0]=='x' || board[0][0]=='o')
            {
                return false;
            }
            break;
        case '2':
            if(board[0][1]=='x' || board[0][1]=='o')
            {
                return false;
            }
            break;
        case '3':
            if(board[0][2]=='x' || board[0][2]=='o')
            {
                return false;
            }
            break;
        case '4':
            if(board[1][0]=='x' || board[1][0]=='o')
            {
                return false;
            }
            break;
        case '5':
            if(board[1][1]=='x' || board[1][1]=='o')
            {
                return false;
            }
            break;
        case '6':
            if(board[1][2]=='x' || board[1][2]=='o')
            {
                return false;
            }
            break;
        case '7':
            if(board[2][0]=='x' || board[2][0]=='o')
            {
                return false;
            }
            break;
        case '8':
            if(board[2][1]=='x' || board[2][1]=='o')
            {
                return false;
            }
            break;
        case '9':
            if(board[2][2]=='x' || board[2][2]=='o')
            {
                return false;
            }
            break;

        }
    }
    else{
        return false;
    }
}
void storeInput(int count,char in)
{
    if(count%2==1)
    {
        if(in=='1')
        {
            board[0][0]='x';
            scount++;
        }
        else if(in=='2')
        {
            board[0][1]='x';
            scount++;
        }
        else if(in=='3')
        {
            board[0][2]='x';
            scount++;
        }
        else if(in=='4')
        {
            board[1][0]='x';
            scount++;
        }
        else if(in=='5')
        {
            board[1][1]='x';
            scount++;
        }
        else if(in=='6')
        {
            board[1][2]='x';
            scount++;
        }
        else if(in=='7')
        {
            board[2][0]='x';
            scount++;
        }
        else if(in=='8')
        {
            board[2][1]='x';
            scount++;
        }
        else if(in=='9')
        {
            board[2][2]='x';
            scount++;
        }

    }else{
        if(in=='1')
        {
            board[0][0]='o';
            scount++;
        }
        else if(in=='2')
        {
            board[0][1]='o';
            scount++;
        }
        else if(in=='3')
        {
            board[0][2]='o';
            scount++;
        }
        else if(in=='4')
        {
            board[1][0]='o';
            scount++;
        }
        else if(in=='5')
        {
            board[1][1]='o';
            scount++;
        }
        else if(in=='6')
        {
            board[1][2]='o';
            scount++;
        }
        else if(in=='7')
        {
            board[2][0]='o';
            scount++;
        }
        else if(in=='8')
        {
            board[2][1]='o';
            scount++;
        }
        else if(in=='9')
        {
            board[2][2]='o';
            scount++;
        }
    }
}
int checkWin()
{
    int count=0;
    if(board[0][0]=='x' && board[1][1]=='x' && board[2][2]=='x')
    {
        return 1;
    }
    else if(board[0][0]=='o' && board[1][1]=='o' && board[2][2]=='o')
    {
        return 2;
    }
    else if(board[0][0]=='x' && board[0][1]=='x' && board[0][2]=='x')
    {
        return 1;
    }
    else if(board[0][0]=='o' && board[0][1]=='o' && board[0][2]=='o')
    {
        return 2;
    }
    else if(board[0][0]=='x' && board[1][0]=='x' && board[2][0]=='x')
    {
        return 1;
    }
    else if(board[0][0]=='o' && board[1][0]=='o' && board[2][0]=='o')
    {
        return 2;
    }
    else if(board[0][2]=='x' && board[1][2]=='x' && board[2][2]=='x')
    {
        return 1;
    }
    else if(board[0][2]=='o' && board[1][2]=='o' && board[2][2]=='o')
    {
        return 2;
    }
    else if(board[2][0]=='x' && board[2][1]=='x' && board[2][2]=='x')
    {
        return 1;
    }
    else if(board[2][0]=='o' && board[2][1]=='o' && board[2][2]=='o')
    {
        return 2;
    }
    else if(board[0][2]=='x' && board[1][1]=='x' && board[2][0]=='x')
    {
        return 1;
    }
    else if(board[0][2]=='o' && board[1][1]=='o' && board[2][0]=='o')
    {
        return 2;
    }
    else if(board[1][0]=='x' && board[1][1]=='x' && board[1][2]=='x')
    {
        return 1;
    }
    else if(board[1][0]=='o' && board[1][1]=='o' && board[1][2]=='o')
    {
        return 2;
    }
    else{
        if(scount==9)
        {
            return 3;
        }
        return 4;
    }
}
