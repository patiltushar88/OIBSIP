#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    int l, ct[100], i, j = 0;

    printf("Enter the string: ");
    scanf("%s", str);
    l = strlen(str);

    printf("\nBefore RLE, string: %s\n", str);
    printf("\nAfter RLE, string:\n");
    for (i = 0; i < l; i += ct[j]) {
        ct[j] = 1;
        for (j = i + 1; str[i] == str[j] && j < l; j++) {
            ct[i]++;
        }
        printf("%d%c", ct[i], str[i]);
    }
    printf("\n");
}

