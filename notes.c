#include <stdio.h>
#include <string.h>

#define MAX_SCALE_SIZE 48
#define SCALES 12

int main(void)
{
    int i;
    char selection[2];
    char scales[SCALES][MAX_SCALE_SIZE] = {
        "C, D, E, F, G, A, B",
        "G, A, B, C, D, E, F#",
        "D, E, F#, G, A, B, C#",
        "A, B, C#, D, E, F#, G#",
        "E, F#, G#, A, B, C#, D#",
        "B, C#, D#, E, F#, G#, A#",
        "Gb, Ab, Bb, Cb, Db, Eb, F",
        "Db, Eb, F, Gb, Ab, Bb, C",
        "Ab, Bb, C, Db, Eb, F, G",
        "Eb, F, G, Ab, Bb, C, D",
        "Bb, C, D, Eb, F, G, A",
        "F, G, A, Bb, C, D, E"
    };

    printf("Pick a major scale:\n"
            "C, G, D, A, E, B, Gb, Db, Ab, Eb, Bb, F\n: ");
    scanf("%s", selection);

    for (i = 0; i < 12; i++) {
        if (selection[0] == scales[i][0] &&
            selection[1] != 'b' &&
            scales[i][1] != 'b') {
            
            printf("\n");
            printf("%c major scale: \n", selection[0]);
            printf(scales[i]);
            printf("\n");
        } else if (selection[0] == scales[i][0] &&
                   selection[1] == 'b' &&
                   scales[i][1] == 'b') {
            printf("\n");
            printf("%c%c major scale: \n", selection[0], selection[1]);
            printf(scales[i]);
            printf("\n");
        }
    }
    return 0;
}
