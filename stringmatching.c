#include <stdio.h>
#include <string.h>

void naiveStringMatch(char* text, char* pattern) {
    int M = strlen(pattern);
    int N = strlen(text);

    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (text[i + j] != pattern[j])
                break;
        if (j == M)
            printf("Pattern found at index %d\n", i);
    }
}

int main() {
    char text[] = "AABAACAADAABAAABAA";
    char pattern[] = "AABA";
    naiveStringMatch(text, pattern);
    return 0;
}
