#include<stdio.h>
int main(){
    while(1){
        int choice,coin,price=0,inserted=0;
        printf("welcome to the Soft Drink Vending Machoine!\n");
        printf("Availale Drinks:\n");
        printf("1. Coke - 25rs\n");
        printf("2. Sprite - 20rs\n");
        printf("3. Fanta - 30rs\n");
        printf("Enter your choice (1-3): ");
        scanf("%d",&choice);
        if(choice == 1){
            price = 25;
            printf("You Selected Coke. Price: 25rs\n");
        }
        else if(choice == 2){ 
            price = 20;
            printf("You Selected Sprite. Price: rs20\n");
        }
        else if(choice == 3){
            price = 30;
            printf("You Selected Fanta. Price: rs30\n");
        }
        else{
            printf("Invalid choice! Please try again.\n"); 
            continue;
        }
        printf("Insert coins (1rs, 2rs, 5rs, 10rs only).\n");
        while(inserted<price){
            printf("Enter a coin: ");
            scanf("%d",&coin);
            if(coin==1||coin==2||coin==5||coin==10){
                inserted+=coin;
                printf("Total inserted: %drs\n", inserted);
            }
            else{
                printf("Invalid coin! Please enter 1rs, 2rs, 5rs, or 10rs only.\n");
            }
        }
        if(choice ==1){
            printf("Dispensing Coke... Enjoy your drink!\n");
        }
        else if(choice ==2){
            printf("Dispensing Sprite... Enjoy your drink!\n");
        }
        else{
            printf("Dispensing Fanta... Enjoy your drink!\n");
        }
        if (inserted > price) {
            printf("Returning change: %drs\n", inserted - price);
        }
        printf("Thank you for using the vending machine!\n");
        break;
    }
    return 0;
}
















