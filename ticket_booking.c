#include <stdio.h>
#include <stdlib.h>
#define ids 866770528
#define pins 2021
#define movies() (printf("\n1. SOORARAI POTTRU\n2. MISS INDIA\n3. PIRATES OF THE CARIBBEAN"))
#define payment(fees) (printf("\nFEE = %d", fees))
int A=100, B=100, C=100, a, b, c, option, choose, choice, pick, pin, id, fees=200;
void booking();
void availability();
void cancellation();

int main(){
    printf("\t\tSATHYA THEATER");
    printf("\tReservation for night show\n");
    printf("Available options are:\n");
    printf(" 1. Booking\n 2. Available movies\n 3.Cancelling ticket\n\n");
    printf("Enter your option :\n");
    scanf("%d", &option);
    switch(option){
        case 1: booking();
        break;
        case 2: availability();
        break;
        case 3: cancellation();
        break;
        default: printf("\n\nEntered invalid option");
        break;
    }
    printf("\n=====THANK YOU====\n");
    return 0;
}
void booking()
{
    printf("\nAvailable movies :\n");
    movies();
    printf("\nEnter your movie choose :\n");
    scanf("%d", &choose);
    #ifdef ids
    {
    switch(choose){
        case 1:{
            printf("\nEnter number of seats you want:");
            scanf("%d", &a);
            if(a<A){
                printf("\nwellcome to state bank of india");
                fees=fees*a;
                payment(fees);
                printf("\nEnter your bank number:");
                scanf("%d", &id);
                printf("\nenter the pin:");
                scanf("%d", &pin);
                if(ids==id && pins==pin ){
                    printf("\nPayment is paid");
                    printf("\nBooking is successfully completed");
                    printf("\nThe seat numbers are:\n");
                    for(int i=0;i<a;i++){
                        printf("%d\n", A);
                        --A;
                    }
                }
                else printf("\nyou have entered wrong id or pin");                
            }
            else printf("\n\tHOUSE FULL");
        }break;
        case 2:{
            printf("\nEnter number of seats you want:");
            scanf("&d", &b);
            if(b<B){
                printf("\nwellcome to state bank of india");
                fees=fees*b;
                payment(fees);
                printf("\nEnter your bank number:");
                scanf("%d", &id);
                printf("\nenter the pin:");
                scanf("%d", &pin);
                if(ids==id && pins==pin ){
                    printf("\nPayment is paid");
                    printf("\nBooking is successfully completed");
                    printf("\nThe seat numbers are:\n");
                    for(int j=0;j<a;j++){
                        printf("%d\n", B);
                        --B;
                    }
                }
                else printf("\nyou have entered wrong id or pin");
                printf("Booking is sucessfully completed");
            }
            else printf("\n\tHOUSE FULL");
        }break;
        case 3:{printf("\nEnter number of seats you want:");
            scanf("&d", &c);
            if(c<C){
                printf("\nwellcome to state bank of india");
                fees=fees*c;
                payment(fees);
                printf("\nEnter your bank number:");
                scanf("%d", &id);
                printf("\nenter the pin:");
                scanf("%d", &pin);
                if(ids==id && pins==pin ){
                    printf("\nPayment is paid");
                    printf("\nBooking is successfully completed");
                    printf("\nThe seat numbers are:\n");
                    for(int k=0;k<a;k++){
                        printf("%d\n", C);
                        --C;
                    }
                }
                else printf("\nyou have entered wrong id or pin");
                printf("Booking is sucessfully completed");
            }
            else printf("\n\tHOUSE FULL");
        }break;
        default: printf("\nYou have entered invalid choose");      
    }
    #else 
        printf("\nNOT DEFINED");
    #endif    
}
}
void availability()
{
    printf("\nAvailable moovies are:");
    movies();
    printf("\n\tALL SHOWS STRATED AT 21:00 PM");   
}
void cancellation(){
    printf("\nNO REFUND");
    printf("\nDo you want to proceed?\n1. yes\n2. no");
    scanf("%d", &choice);
    if(choice==1){
        movies();
        printf("\nEnter the movie select you had booked:");
        scanf("%d", &pick);
        switch(pick){
            case 1:{
                A+=1;
                printf("\nCancellation completed");
                }break;
            case 2:{
                B+=1;
                printf("\nCancellation completed");
                }break;
            case 3:{
                C+=1;
                printf("\nCancellation completed");
                }break;
            default: printf("\nYou enter wrong option");
            break;
        }
    }    
    else printf("\nThanking you for changing your mind");
}

