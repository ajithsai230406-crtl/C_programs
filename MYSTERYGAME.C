/*: : : Mystery game program with background music : : :*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

// Function prototypes
void intro();
void select_case();
void suspense_effect();
void countdown_timer();
void analyze_clue();
void detective_rank(int correct_guesses);
void murder_case();
void theft_case();
void missing_person_case();
void solve_murder();
void solve_theft();
void solve_missing_person();
void play_game_music();
void stop_game_music();

int total_score = 0;

int console_width = 80;
int console_height = 24;

void update_console_size() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        console_width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        console_height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    }
}


// Background music
void play_game_music() {
    if (!PlaySound(TEXT("C:\\Users\\ajith\\OneDrive\\Desktop\\beep.wav"), NULL, SND_FILENAME | SND_ASYNC
                   | SND_LOOP)) {
        printf(" Failed to play sound.\n");
    }
}

void stop_game_music() {
    PlaySound(NULL, NULL, 0);
}

// Game Loading and some inputs
int main() {
    printf("                                                  LOADING....                                           ");
    sleep(8);
    float A = 0, B = 0;
    float i, j;
    char buffer[1760];
    float zbuffer[1760];

    const int console_width = 80;
    const int console_height = 22;

    int x_center = (console_width / 2) + 10;
    int y_center = console_height / 2;

    printf("\x1b[2J");  // Clear screen
    play_game_music();  // Start music loop

    clock_t start_time = clock();

    while ((clock() - start_time) / CLOCKS_PER_SEC < 15) {
        memset(buffer, ' ', 1760);
        memset(zbuffer, 0, 7040);

        for (j = 0; j < 6.28; j += 0.07) {
            for (i = 0; i < 6.28; i += 0.02) {
                float sin_i = sin(i), cos_j = cos(j);
                float sin_A = sin(A), sin_j = sin(j);
                float cos_A = cos(A), h = cos_j + 2;
                float D = 1 / (sin_i * h * sin_A + sin_j * cos_A + 5);
                float cos_i = cos(i), cos_B = cos(B), sin_B = sin(B);
                float t = sin_i * h * cos_A - sin_j * sin_A;

                int x = x_center + 30 * D * (cos_i * h * cos_B - t * sin_B);
                int y = y_center + 15 * D * (cos_i * h * sin_B + t * cos_B);
                int o = x + 80 * y;

                int luminance = 8 * ((sin_j * sin_A - sin_i * cos_j * cos_A) * cos_B - sin_i * cos_j * sin_A - sin_j * cos_A - cos_i *cos_j * sin_B);

                char detective_chars[] = "@###&&$%";
                char torus_chars[] = ".,-~:;=!*#$@";

                char final_char = (luminance > 1 ? (clock() - start_time) / CLOCKS_PER_SEC > 6 ? detective_chars[luminance % 7] : torus_chars[luminance] : ' ');

                if (y > 0 && y < 22 && x > 0 && x < 80 && D > zbuffer[o]) {
                    zbuffer[o] = D;
                    buffer[o] = final_char;
                }

                if ((clock() - start_time) / CLOCKS_PER_SEC > 7) {
                    if (y == 5 && (x > 30 && x < 50)) buffer[o] = '=';
                    if (y == 6 && (x > 32 && x < 48)) buffer[o] = '#';

                    if ((x - 65) * (x - 65) + (y - 12) * (y - 12) < 6) buffer[o] = 'O';
                    if ((x - 64) * (x - 64) + (y - 13) * (y - 13) < 4) buffer[o] = '@';
                }
            }
        }

        printf("\x1b[H");
        for (int k = 0; k < 1760; k++) {
            putchar(k % 80 ? buffer[k] : '\n');
        }

        A += 0.4;
        B += 0.2;
    }
    printf("\x1b[2J");
    printf("\n\n");
    srand(time(NULL));
    intro();
    select_case();
    return 0;
}

// Game introduction
void intro() {
    for (int space = 1; space <= 16; space++)
        {
            printf("  ");
        }
    printf("      ===============================================\n");
     printf("\n\n");
     for (int space = 1; space <= 16; space++)
        {
            printf("  ");
        }
    printf("           WELCOME TO THE ULTIMATE DETECTIVE GAME\n");
    printf("\n\n");
     for (int space = 1; space <= 16; space++)
        {
            printf("  ");
        }
    printf("      ===============================================\n\n");
    sleep(3);
    suspense_effect();

    printf("\nYou are a detective assigned to high-profile cases.\n\n");
    printf("Investigate, analyze, and make bold decisions.\n\n");
    printf("The clock is ticking,every second counts.\n\n");
}

// Countdown timer
void countdown_timer() {
    int time_left = 10;
    while (time_left > 0) {
        printf("\rTime left: %d seconds", time_left);
        fflush(stdout);
        sleep(1);
        time_left--;
    }
    printf("\nTime's up! Make your decision NOW!\n");
}

// Suspense effect
void suspense_effect() {
    printf("\nAnalyzing clues...\n");
    for (int i = 0; i < 5; i++) {
        printf(". ");
        fflush(stdout);
        usleep(500000);
    }
    printf("\n");
   }

// Analyze clue simulation
void analyze_clue() {
    printf("\nProcessing forensic data and witnessing statements...\n");
    sleep(1);
}

// Case selection menu
void select_case() {
    int case_choice;
    while (1) {
            sleep(3);
            printf("\n\n");
             for (int space = 1; space <= 17; space++)
        {
            printf("  ");
        }
        printf("   ------------------------------------\n");
        printf("\n\n");
         for (int space = 1; space <= 17; space++)
        {
            printf("  ");
        }
       printf("      CHOOSE YOUR NEXT MYSTERY CASE:\n");
       printf("\n\n");
     for (int space = 1; space <= 17; space++)
        {
            printf("  ");
        }
        printf("   ------------------------------------\n\n\n\n");
         sleep(1);
        printf("1. #@!MURDER MYSTERY!@#");
         for (int space = 1; space <= 5; space++)
        {
            printf("  ");
        }
        printf("2. =+$Theft Investigation$+=");
         for (int space = 1; space <= 5; space++)
        {
            printf("  ");
        }
        printf("3. ???Missing Person???");
         for (int space = 1; space <= 5; space++)
        {
            printf("  ");
        }
        printf("4.<-Quit Game->");

        printf("\n\nEnter your choice (1 - 4): ");

        if (scanf("%d", &case_choice) != 1) {
            printf("\nInvalid input! Enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
//The Cases to solve,exit & End note for case completion...
        switch (case_choice) {
            case 1: murder_case();
                          break;
            case 2: theft_case();
                          break;
            case 3: missing_person_case();
                          break;
            case 4:
                printf("\nExiting game. Final Score: %d/3\n", total_score);
                if (total_score == 3)
                    printf("\nExcellent work! You cracked every case.\n");
                else if (total_score == 0)
                    printf("\nTough luck, detective. Study those clues better next time.\n");
                else
                    printf("\nGood effort. You're getting there.\n");
                exit(0);
            default: printf("\nThat's not a valid choice. Try again.\n");
        }
    }
}

// Murder Mystery Case
void murder_case() {
     stop_game_music(); // Stop the main music before playing new one

    // Play deep.wav specifically for this case
    if (!PlaySound(TEXT("C:\\Users\\ajith\\OneDrive\\Desktop\\meep.wav"), NULL, SND_FILENAME
                   | SND_ASYNC | SND_LOOP)) {
        printf("Failed to play meep.wav sound.\n");
    }
    printf("\nCase: A journalist has been found dead in their office.\n\n");
    suspense_effect();
    printf("\nClue 1: A threatening letter arrived a week ago.\n\n");
    printf("Clue 2: The coffee cup smells of poison,intentional or accidental?\n\n");
    printf("Clue 3: Security footage shows a shadow image.\n\n");

    analyze_clue();

    printf("\n\nSUSPECTS:\n\n");
    printf("1. V.Deepthi - Journalist\t");
    printf("2. S. Haseena - Assistant\t");
    printf("3. K. Rajinikant - Chief-Editor\t");
    printf("    4. G.M.Rao - Lawyer\n\n\n");

    countdown_timer();
    solve_murder();
}

// Solve Murder
void solve_murder() {
    int answer;
    printf("\n\nWho is the murderer? Enter suspect number: ");

    if (scanf("%d", &answer) != 1) {
        printf("\nInvalid input! Enter a number.\n");
        while (getchar() != '\n');
        return;
    }

    suspense_effect();

    if (answer == 1) {
        printf("\n\nCorrect! Deepthi, the rival journalist, Did the crime to steal an exclusive story.\n\n");
        detective_rank(1);
        total_score++;
    } else {
        printf("\n\nWrong choice. New evidence suggests the assistant may have been involved.\n\n");
        detective_rank(0);
    }
    play_game_music();
}

// Theft Case
void theft_case() {
     stop_game_music(); // Stop the main music before playing new one

    // Play deep & seep specifically for this case
    if (!PlaySound(TEXT("C:\\Users\\ajith\\OneDrive\\Desktop\\deep.wav"), NULL, SND_FILENAME | SND_ASYNC)) {
        printf("Failed to play deep.wav sound.\n");
    }
    sleep(6);
        if (!PlaySound(TEXT("C:\\Users\\ajith\\OneDrive\\Desktop\\seep.wav"), NULL, SND_FILENAME |SND_ASYNC | SND_LOOP)) {
        printf("Failed to play seep.wav sound.\n");
    }


    printf("\nCase: A precious Diamond was stolen from the city museum last night.\n\n");
    suspense_effect();
    printf("\nClue 1: No signs of forced entry — an inside job?\n\n");
    printf("Clue 2:  The Display Case was melted by Hydrofluoric Acid!!.\n\n");
    printf("Clue 3: The current was cut - off just before the robbery.\n\n");

    analyze_clue();

    printf("\n\nSUSPECTS:\n\n");
    printf("1. C.Varun - Security Guard (LaZy Fellowww)\n\n");
    printf("2. G.Vaibhav - Museum Incharge(Not Paid Enough GOVT Employee )\n\n");
    printf("3. P.Bhanu - Local Thief (Chor SAALA)\n\n");
    printf("4. S.Osman - Electrical Technician (LiGHt Waala )\n\n\n");

    printf("\n A Female Detective  was Investigating This Case\n\n");
    printf("\n SUSPECTS STATEMENTS...\n");
    printf("\n 1. Varun - I fell asleep in the CCTV Room ,I Woke up to the noise of someone running,\n I could not see the Face in the dark as both the lights and CCTV were disabled...\n\n");
    printf("\n 2. Vaibhav - I was inspecting the newly arrived shipment of gems till late night and\n REALISED it was my Wedding Anniversary (T-T)  \nso i had to leavee...\n\n");
    printf("\n 3. Bhanu - I was Drinking With my Friendss ;)  , Btw you're looking Cutee, Inner feeling \n(Madam saar Madam anthe!!) \n\n ");
    printf("\n 4. Osman - I was wiring a circuit, which caused shot circuit and power went off and i was busy in fixing the issue!!\n\n\n");
    countdown_timer();
    solve_theft();
}

// Solve Theft
void solve_theft() {
    int answer;
    printf("\n\nWho stole the Diamond? Enter suspect number : ");

    if (scanf("%d", &answer) != 1) {
        printf("\nInvalid input! Numbers only.\n");
        while (getchar() != '\n');
        return;
    }

    suspense_effect();

    if (answer == 2) {
        printf("\n\nCorrect! Vaibhav, the Incharge, Stole the Diamond to impress his Wife on their Anniversary .\n\n");
        detective_rank(1);
        total_score++;
    } else {
        printf("\n\nWrong choice. Vaibhav was seen carrying a box to his home \n\n");
        detective_rank(0);
    }
    play_game_music();
}

// Missing Person Case
void missing_person_case() {
     stop_game_music(); // Stop the main music before playing new one

    // Play keep.wav specifically for this case
    if (!PlaySound(TEXT("C:\\Users\\ajith\\OneDrive\\Desktop\\keep.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP)) {
        printf("Failed to play keep.wav sound.\n");
    }

    printf("\nCase: A girl left her hostel on saturday night and on sunday morning \n A case has been filled for her disappearance  .\n\n");
    suspense_effect();
    printf("\nClue 1:  Her Phone's last location was detected near the train station.\n\n");
    printf("Clue 2: Her backpack was found near the lake.\n\n");


    analyze_clue();

    printf("\n\nSUSPECTS :\n\n");
    printf("1. Roommate -  she left the room saying that she is going to a party , i saw her leaving with a stranger.\n\n");
    printf("  2. Boyfriend - I went to meet her on Saturday night in the class but she did not show up but her friend came.\n\n");
    printf(" 3. Professor - I insisted that she come to the extra class but she did not turn up.\n\n");
    printf("4. Stranger - (Online records hint that the stranger may have been stalking the victim online) .\nMistook her for a close friend of mine\n\n");

    countdown_timer();
    solve_missing_person();
}

// Solve Missing Person
void solve_missing_person() {

    int answer;
    printf("\n\nWho is most likely involved in the disappearance? Enter suspect number : ");

    if (scanf("%d", &answer) != 1) {
        printf("\nInvalid input. Use numbers only.\n");
        while (getchar() != '\n');
        return;
    }

    suspense_effect();

    if (answer == 1) {
        printf("\n\nCorrect! The Room mate ,\n she was obsessed with the victims boyfriend , so she mixed drugs in the victims juice and when the victim passed out  the roommate mistook her for being dead and threw away her phone and backpack , However the victim has been rescued and is hospitalised.\n\n\n");
        detective_rank(1);
        total_score++;
    } else {
        printf("\n\nIncorrect.  The  boyfriend think that the victims roommate is obsessed with him.\n\n");
        detective_rank(0);
    }
    play_game_music();
}

// Rank system
void detective_rank(int correct_guesses) {
    if (correct_guesses) {
        printf("\nYour Detective Rank: MASTER DETECTIVE\n");
    } else {
        printf("\nYour Detective Rank: Rookie. Keep practicing.\n");
    }
}


