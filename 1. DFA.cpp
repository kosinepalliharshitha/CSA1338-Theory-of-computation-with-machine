#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Define the states of the DFA
enum State {
    START,
    STATE_A,
    STATE_ACCEPT
};

// Function to simulate DFA
bool isAccepted(char str[]) {
    int currentState = START;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        switch(currentState) {
            case START:
                if (str[i] == 'a') {
                    currentState = STATE_A;
                } else {
                    return false;
                }
                break;

            case STATE_A:
                if (i == length - 1 && str[i] == 'a') {
                    currentState = STATE_ACCEPT;
                }
                break;

            case STATE_ACCEPT:
                return false;
        }
    }

    return currentState == STATE_ACCEPT;
}

// Main function to test the DFA
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    if (isAccepted(input)) {
        printf("String is accepted.\n");
    } else {
        printf("String is not accepted.\n");
    }

    return 0;
}
