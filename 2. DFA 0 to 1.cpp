#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Define the states of the DFA
enum State {
    START,
    STATE_0,
    STATE_1,
    STATE_ACCEPT,
    STATE_REJECT
};

// Function to simulate DFA
bool isAccepted(char str[]) {
    int currentState = START;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        switch(currentState) {
            case START:
                if (str[i] == '0') {
                    currentState = STATE_0;
                } else {
                    currentState = STATE_REJECT;
                }
                break;

            case STATE_0:
                if (str[i] == '0') {
                    currentState = STATE_0;
                } else if (str[i] == '1') {
                    currentState = STATE_1;
                } else {
                    currentState = STATE_REJECT;
                }
                break;

            case STATE_1:
                if (str[i] == '1') {
                    currentState = STATE_1;
                } else {
                    currentState = STATE_REJECT;
                }
                break;

            case STATE_ACCEPT:
            case STATE_REJECT:
                return false;
        }
    }

    return currentState == STATE_1;
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
