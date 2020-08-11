#include <stdio.h>
#include <string.h>
#define MAX_SCALE_SIZE 48
#define SCALES 12


int main(void)
{
    int i;
    char selection[2];
    //char CM[SCALES][MAX_SCALE_SIZE];
    char scales[SCALES][MAX_SCALE_SIZE] = {
        "C, D, E, F, G, A, B\0",
        "G, A, B, C, D, E, F#\0",
        "D, E, F#, G, A, B, C#\0",
        "A, B, C#, D, E, F#, G#\0",
        "E, F#, G#, A, B, C#, D#\0",
        "B, C#, D#, E, F#, G#, A#\0",
        "Gb, Ab, Bb, Cb, Db, Eb, F\0",
        "Db, Eb, F, Gb, Ab, Bb, C\0",
        "Ab, Bb, C, Db, Eb, F, G\0",
        "Eb, F, G, Ab, Bb, C, D\0",
        "Bb, C, D, Eb, F, G, A\0",
        "F, G, A, Bb, C, D, E\0"
    };

    //memset(CM, '\0', sizeof(CM));
    //strcpy(CM[0], scales[11]);
    //printf("test = %s\n", CM[0]);

    printf("Pick a scale:\n"
            "C, G, D, A, E, B, Gb, Db, Ab, Eb, Bb, F\n: ");
    scanf("%c", selection);
    for (i = 0; i < 11; i++) {
        if (selection[0] == scales[i][0] && scales[i][1] != 'b') {
            printf(scales[i]);
            printf("\n");
            printf("%d\n", i);
        }
    }
    return 0;
}
