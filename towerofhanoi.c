#include <stdio.h>
#include <stdlib.h>
void towerofhanoi(int,char,char,char);

void main(){
    int num;
    printf("Enter the number of disks:\n");
    scanf("%d",&num);
    printf("The sequence of moves in tower of hanoi are:\n");
    towerofhanoi(num,'A','B','C');
}

void towerofhanoi(int n, char from, char to, char aux){
    if(n==1){
        printf("\nMove disk 1 from peg %c to peg %c",from,to);
        return;
    }
    towerofhanoi(n-1,from,aux,to);
    printf("\nMove disk %d from peg %c to peg %c",n,from,to);
    towerofhanoi(n-1,aux,to,from);
}