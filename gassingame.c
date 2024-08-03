
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(void);
int randg(void);

int main() {

    game();

return 0;
}
int randg(void){
srand(time(0));
    int number = (rand() % 6) + 1;
    return number;
}
void game(void){
    int guess;
  int number = randg();
for (int i = 0; i < 3; i++) {
        printf("Give me a number from 1 to 6: ");
        scanf("%d", &guess);

        if (guess != number) {
            if (guess > number) {
                printf("Lower the number\n");
            } else {
                printf("Higher the number\n");
            }
        } else {
            printf("The number is correct!\n");
            break;
        }
    }

    if (guess != number) {
        printf("The correct number was %d\n", number);
    }
}

