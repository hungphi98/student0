#include<stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2){
        return 0;
    }
    printf("%s", *argv);
    char c;
    int characters, words, lines;
    characters = 0;
    words = 0;
    lines = 0;
    FILE *file;
    file = fopen(argv[1], "rt");
    if (file){
        while((c = getc(file))!= EOF){
            if (c == ' '){
                words++;
            }else if (c == '\n'){
                lines++;
                words++;
            }
            characters++;
        }
        fclose(file);
    }
    printf(" %d  %d %d %s \n", lines, words, characters, argv[1]);
    return 0;
}
