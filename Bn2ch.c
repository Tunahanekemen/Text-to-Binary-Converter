#include  <stdio.h>

void code() {
    FILE *dosya = fopen("code.txt", "w");
    if (dosya == NULL) {
        return;
    }
    printf("Enter the text: (press Ctrl + Z to finish text):");
    int ch;
    while ((ch = getchar()) != EOF) {
        for (int i = 0; i <= 7; i++) {
            fprintf(dosya, "%d", (ch >> (7 - i)) & 1);
        }
    }
    printf("Text coded to code.txt\n\n");
    fclose(dosya);

}

void decode() {
    FILE *dosya = fopen("code.txt", "r");
    if (dosya == NULL) {
        return;
    }
    int ch, count = 0;
    char arr = 0;
    printf("code.txt decoding.. \n");
    while ((ch = fgetc(dosya)) != EOF) {
        arr = arr << 1;
        arr = arr | ch - '0';
        count++;
        if (count == 8) {
            printf("%c", arr);
            count = 0;
            arr = 0;
        }
    }
    printf("\n\n");
    fclose(dosya);
}

int main() {
    while (1) {
        int c;
        printf("For encode 1, for decode 2,to exit 0:");
        scanf("%d", &c);
        getchar(); // to clear /n
        if (c == 1) {
            code();
        } else if (c == 2) {
            decode();
        } else if (c == 0) {
            printf("Exiting..");
            break;
        } else {
            printf("Invalid input");
        }
    }
    return 0;
}
