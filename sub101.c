#include <stdio.h>
#include <stdbool.h>

// Define the DFA transition function
int transition(int currentState, char input) {
    switch (currentState) {
        case 0:
            return (input == '1') ? 1 : 0;
        case 1:
            return (input == '0') ? 2 : ((input == '1') ? 1 : 0);
        case 2:
            return (input == '1') ? 3 : ((input == '0') ? 2 : 0);
        case 3:
            return (input == '1') ? 3 : ((input == '0') ? 2 : 0);
        default:
            return 0;
    }
}

// Check if the input string is accepted by the DFA
bool isAccepted(char* input) {
    int currentState = 0;
    for (int i = 0; input[i] != '\0'; ++i) {
        currentState = transition(currentState, input[i]);
    }
    return (currentState == 3); // Accept if the final state is 3
}

int main() {
    char input[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", input);

    // Check if the string is accepted
    if (isAccepted(input)) {
        printf("Accepted\n");
    } else {
        printf("Not Accepted\n");
    }

    return 0;
}
