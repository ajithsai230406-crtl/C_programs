#include <stdio.h>
#include <string.h>

// Struct to represent suspects
struct Suspect {
    char name[20];
    int questioned;
    char clue[50];
};

// Function prototypes
void introduction();
void investigateRoom(char room[], struct Suspect suspects[], int *foundClue);
void questionSuspect(struct Suspect *suspect);
void accuseSuspect(struct Suspect suspects[], int numSuspects);

int main() {
    struct Suspect suspects[3] = {
        {"Alice", 0, "A necklace was found in Alice's room."},
        {"Bob", 0, "Bob has a receipt for a pawnshop transaction."},
        {"Charlie", 0, "Charlie has no alibi for the time of the theft."}
    };

    int gameOver = 0;
    int foundClue = 0;
    char choice[20];

    introduction();

    while (!gameOver) {
        printf("\nWhat would you like to do? (investigate/question/accuse/exit): ");
        scanf("%s", choice);

        if (strcmp(choice, "investigate") == 0) {
            char room[20];
            printf("Which room would you like to investigate? (livingroom/kitchen/bedroom): ");
            scanf("%s", room);
            investigateRoom(room, suspects, &foundClue);
        } else if (strcmp(choice, "question") == 0) {
            char suspectName[20];
            printf("Who would you like to question? (Alice/Bob/Charlie): ");
            scanf("%s", suspectName);

            for (int i = 0; i < 3; i++) {
                if (strcmp(suspectName, suspects[i].name) == 0) {
                    questionSuspect(&suspects[i]);
                    break;
                }
            }
        } else if (strcmp(choice, "accuse") == 0) {
            accuseSuspect(suspects, 3);
            gameOver = 1;
        } else if (strcmp(choice, "exit") == 0) {
            printf("Thanks for playing! Goodbye!\n");
            gameOver = 1;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void introduction() {
    printf("Welcome, Detective! A valuable artifact has been stolen from the mansion.\n");
    printf("Your mission is to investigate, question suspects, and solve the mystery.\n");
    printf("Good luck!\n\n");
}

void investigateRoom(char room[], struct Suspect suspects[], int *foundClue) {
    if (strcmp(room, "livingroom") == 0 && !*foundClue) {
        printf("You found a piece of jewelry in the living room. It belongs to Alice.\n");
        *foundClue = 1;
    } else if (strcmp(room, "kitchen") == 0) {
        printf("The kitchen seems clean and unrelated to the crime.\n");
    } else if (strcmp(room, "bedroom") == 0) {
        printf("You found a pawnshop receipt in Bob's bedroom.\n");
    } else {
        printf("This room is either invalid or you've already investigated it.\n");
    }
}

void questionSuspect(struct Suspect *suspect) {
    if (!suspect->questioned) {
        printf("You question %s: %s\n", suspect->name, suspect->clue);
        suspect->questioned = 1;
    } else {
        printf("You've already questioned %s.\n", suspect->name);
    }
}

void accuseSuspect(struct Suspect suspects[], int numSuspects) {
    char suspectName[20];
    printf("Who do you want to accuse? (Alice/Bob/Charlie): ");
    scanf("%s", suspectName);

    if (strcmp(suspectName, "Bob") == 0) {
        printf("Congratulations! You've solved the mystery. Bob was the culprit!\n");
    } else {
        printf("Wrong accusation. The culprit was Bob. Better luck next time!\n");
    }
}
