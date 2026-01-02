#include <stdio.h>

int main() {

    /* Step 1: Store a fixed numeric password in a variable */
    int storedPassword = 62555;
    int enteredPassword;

    /* Step 2: Decide the maximum number of attempts allowed */
    int maxAttempts = 3;

    /* Step 3: Use a loop to give the user limited login attempts */
    for(int attempt = 1; attempt <= maxAttempts; attempt++) {

        /* Step 4: Inside the loop, ask the user to enter the password */
        printf("Enter numeric password: ");

        /* Step 5: Read the entered password using scanf */
        scanf("%d", &enteredPassword);

        /* Step 6: Compare the entered password with the stored password */
        if(enteredPassword == storedPassword) {

            /* Step 7: If password matches, print success message and exit loop */
            printf("Login Successful! Access Granted.\n");
            break;
        }
        else {

            /* Step 8: If password is wrong, reduce remaining attempts */
            printf("Incorrect Password.\n");
            printf("Remaining attempts: %d\n", maxAttempts - attempt);
        }

        /* Step 9 & Step 10 */
        if(attempt == maxAttempts) {
            printf("Account Locked! All login attempts failed.\n");
        }
    }

    return 0;
}