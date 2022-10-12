#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int i, num;
    time_t t;
    num = 5;
    srand((unsigned) time(&t));
    int guessnum = rand() % 100;
    int guess = 7;
    
    char buffer[100];
    while(guess > 0){
        printf("0 ile 100 arasında bir sayı giriniz:\n");
        int guessed;
        fgets(buffer, 99, stdin);
        sscanf(buffer, "%d", &guessed);
        if(guessed == guessnum){
            printf("Tebrikler sayıyı doğru bildiniz! Sayı: %d \n", guessnum);
            break;
        }
        else if(guessed < guessnum){
            
            printf("Tahmin sayınız küçük. Kalan Tahmin Hakkınız:%d \n",guess -1);
        }
        else if(guessed > guessnum){
            
            printf("Tahmin sayınız büyük. Kalan tahmin hakkınız:%d \n",guess -1);
        }

        guess = guess - 1;
    }
    
    printf("Sayı %d'idi \n", guessnum);
    return 0;
}