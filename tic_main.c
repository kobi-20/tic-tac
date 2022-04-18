#include<stdio.h>
char array[9] = {'0','1','2','3','4','5','6','7','8'} ;
void printdata(){
    printf("*************\n");
    printf("\t\t%c | %c | %c\n" ,array[0] ,array[1] , array[2]);
    printf("\t\t__|___|__\n" );
    printf("\t\t%c | %c | %c\n" ,array[3] ,array[4] , array[5]);
    printf("\t\t__|___|__\n" );
    printf("\t\t%c | %c | %c\n" ,array[6] ,array[7] , array[8]);
}
int checkwin(){
    // Condition for Player 1 to win ....
    if(array[0] == array[1] && array[1] == array[2] && array[0] == 'x'){
        return 1 ; 
    }
    else if(array[3] == array[4] && array[4] == array[5] && array[3] == 'x'){
        return 1 ;
    }
    else if(array[6] == array[7] && array[7] == array[8] && array[6] == 'x'){
        return 1 ;
    }
    // Horizontal Condition checked....
    // Now diagonal condition checking...
    else if(array[0] == array[4] && array[4] == array[8] && array[0] == 'x'){
        return 1 ;
    }
    else if(array[2] == array[4] && array[4] == array[6] && array[2] == 'x'){
        return 1 ;
    }
    // diogonal condition checked...
    // vertical condition checking for player 1
    else if(array[0] == array[3] && array[3] == array[6] && array[0] == 'x'){
        return 1 ;
    }
    else if(array[1] == array[4] && array[4] == array[7] && array[1] == 'x'){
        return 1 ;
    }
    else if(array[2] == array[5] && array[5] == array[8] && array[2] == 'x'){
        return 1 ;
    }
    // Condition for Player 2 to win ....
    if(array[0] == array[1] && array[1] == array[2] && array[0] == 'o'){
        return 0 ; 
    }
    else if(array[3] == array[4] && array[4] == array[5] && array[3] == 'o'){
        return 0 ;
    }
    else if(array[6] == array[7] && array[7] == array[8] && array[6] == 'o'){
        return 0 ;
    }
    // Horizontal Condition checked....
    // Now diagonal condition checking for player 2
    else if(array[0] == array[4] && array[4] == array[8] && array[0] == 'o'){
        return 0 ;
    }
    else if(array[2] == array[4] && array[4] == array[6] && array[2] == 'o'){
        return 0 ;
    }
    // diogonal condition checked...
    // vertical condition checking for player 2
    else if(array[0] == array[3] && array[3] == array[6] && array[0] == 'o'){
        return 0 ;
    }
    else if(array[1] == array[4] && array[4] == array[7] && array[1] == 'o'){
        return 0 ;
    }
    else if(array[2] == array[5] && array[5] == array[8] && array[2] == 'o'){
        return 0 ;
    }
    else if(array[0]!= '0' && array[1] != '1' && array[2] != '2' && array[3] !=2 && array[4] != 4 && array[5] !='5' && array[6] != '6' && array[7] != '7' && array[8] != '8'){
        return 2 ;
    }
    else{
        return -1 ;
    }
}
int main(){
    int  chance = 0 , player , num , result ;
    char name1[20] , name2[20] , res ;
    printf("-----------TIC TAC TOE------------\n");
    printf("Enter The name of player 1 :\n");
    gets(name1);
    printf("Enter The name of player 2 :\n");
    gets(name2);
    printf("Player 1----> x and Player 2 ----> o \n");
    do{
        printdata();
        if(chance%2==0){
            player = 1 ;
            res = 'x' ;
            //printf("%c" , res);
        }
        else if(chance%2!=0){
            player = 2; 
            res = 'o' ;
            //printf("%c" , res);
        }
        printf("Player %d --> Enter a number :\n" , player);
        scanf("%d" , &num);
        if(num==0 && array[0] =='0'){
            array[0] = res ;
            //printf("%c\n" , array[0]);
        }
        else if(num==1 && array[1]== '1'){
            array[1] = res ;
        }
        else if(num==2 && array[2]== '2'){
            array[2] = res ;
        }
        else if(num==3 && array[3]== '3'){
            array[3] = res ;
        }
        else if(num==4 && array[4]== '4'){
            array[4] = res ;
        }
        else if(num==5 && array[5]== '5'){
            array[5] = res ;
        }
        else if(num==6 && array[6]== '6'){
            array[6] = res ;
        }
        else if(num==7 && array[7]== '7'){
            array[7] = res ;
        }
        else if(num==8 && array[8]== '8'){
            array[8] = res ;
        }
        else{
            printf("Invalid Move \n");
            chance--;
        }
        chance++;
    }while(checkwin()==-1);
    result = checkwin();
    if(result == 1){
        printdata();
        printf("%s Win !!! :)\n" , name1);
    }
    else if(result == 0){
        printdata();
        printf("%s Win !!! :)\n" , name2);
    }
    else if(result == 2){
        printf("Draw..\n");
    }
    return 0;
}
