#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int loginSystem, char *login[])
{
   
    if (loginSystem != 3)
    {
        printf("Anda harus login terlebih dahulu!");
        printf("\nCara penggunaan : ./namafile username password");
    }

    char usernameInput[10], passwordInput[10];
    strcpy(usernameInput, login[1]);
    strcpy(passwordInput, login[2]);
    // printf("%s %s\n",usernameInput,passwordInput);
    //pointer
    FILE *fpr;

    if ((fpr = fopen("Algo.bin", "rb")) == NULL){
        printf("File tidak dapat dibuka!");
        return EXIT_FAILURE;
    }

    char userData[25];
        // fread(userData,1,25, fpr);
        fgets(userData,25,fpr);

    fclose(fpr);

    char *string[3];
    char username[20], password[20];

    int ctrl = 0;

    string[0] = strtok(userData, "@");
    while (string[ctrl++] != NULL) 
    {
        string[ctrl] = strtok(NULL, "@");
    }

    strcpy(username, string[0]);
    strcpy(password, string[1]);
    // printf("%s %s\n",username,password);
    

    if((strcmp(usernameInput, username) == 0) && (strcmp(passwordInput, password) == 0)){
// <<<<<<< HEAD
        printf("Halo %s, selamat bermain!", username);
// =======
    }
    else {
        printf("Username atau Password anda salah!");
    }
}