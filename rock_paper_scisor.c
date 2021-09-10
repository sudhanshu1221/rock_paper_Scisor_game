#include<stdio.h>
#include<time.h>
#include<stdlib.h>

   int rockpaperscisor(char user,char com){

        if (user==com)
        {
            return 0;
        }
        if(user=='r'&& com=='p'){
            return -1;

        }
        if(user=='p'&& com=='r'){
            return 1;

        }
        if(user=='s'&& com=='r'){
            return -1;

        }
        if(user=='r'&& com=='s'){
            return 1;

        }
        if(user=='s'&& com=='p'){
            return 1;

        }
        if(user=='p'&& com=='s'){
            return -1;

        }
        
    }
    
int main()
{
    char user;
    char com;
    srand(time(0));
    int numb=rand()%10+1;
    if (numb<4)
    {
        com='r';
    }
    else if (numb>3 && numb<7)
    {
        com='p';
    }
    else{
        com='s';
    }
    
    


    printf("select one among r for rock,p for paper ,s for scissor:\n");
    scanf("%c",&user);
    int result=rockpaperscisor(user,com);
    printf("user chose %c and computer chose %c\n",user,com);
    if (result==1)
    {
        printf("user won");
    }
    if (result==0)
    {
        printf("game draw");
    }
    if (result==-1)
    {
        printf("com won");
    }
    

    
return 0;
}