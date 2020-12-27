#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"

char *getWord()
{
#define WORD 30

    char *word = (char *)malloc(WORD * sizeof(char));
    if (word == NULL)
    {
        printf("error");
    }

    else
    {
        printf("Enter your word  \n");
        scanf("%s ", word);//First scan
    }
    return word;
}

void menu(char *word)
{

    int *numofLine = 0;
    char c;
    char ***text;
    printf("choose your action \n");
    printf("'a' for printLines \n");
    printf("'b' for printWords \n");
    scanf(" %c", &c);
    switch (c)
    { //switch B
    case 'a':
        printf("i entere a .\n");
        text = getText(numofLine);
        printOnlyLines(text, numofLine, word);
        break;

    case '\n':
        break;
        // case 'b':
        //   printOnlyWords();

    default:
        printf("There no action like this , try again ! /n");
    }
}

char ***getText(int *countNumOfLines)
{
#define numOfLines 249
#define MAX 64000 //256*250 MAX OF CHARS IN TEXT.
    *countNumOfLines = 0;
    char ***text;
    text = (char ***)malloc(sizeof(char) * MAX); //check if theרe memory.
    if (text)
    {
        char ***ptr = text; // his pointing to the first line.

        while (numOfLines <= 250)
        {
            *countNumOfLines = *countNumOfLines + inputLine(*ptr); // i build line by line
            ptr++;                                                  // i point to the next line .
        }
    }
    return text;
}

int inputLine(char **w)
{// gets a pointer to line 'i' 
#define lineSize 256
    int numOfCharInLine = 0;
    int endLine = 1;
    while ((numOfCharInLine <= 256) & (endLine))
    {
        numOfCharInLine = getword(*w) + numOfCharInLine;//w pointing to the word[i] in this line.
        if ((**(w) == '/') & (**(w + 1) == 'n'))
        {
            endLine = 0;
        }

        w++;

    }
    return numOfCharInLine;
}

int getword(char *w)
{
//     int numOfCharInWord = 0;
// #define WordSize 30
//     char c;
//     char v = ' ';
//     while ((c = !v) && (numOfCharInWord <= 30))
//     { // word didnt end , word didnt pass the limit.
//         scanf(" %c", w);
//         w++;
//         numOfCharInWord++;
//     }

scanf("%s", w);
    return strlen(w);
    
}

void printOnlyLines(char ***text, int* numOFLines, char *word)
{
    for (int i = 0; i < numOfLines; i++)
    {
        if (searchInLine(*(text + i), word) == 1)
        {
            printLine(*(text + i));
        }
    }
}

int searchInLine(char **Line, char *word)
{
    char **ptr = Line;
    int endLine = 1;
    int found = 0;
    while ((endLine) & (!found))
    {
        found = subString(*ptr, word);
        ptr++;

        if (**ptr == '/' && **(ptr + 1) == 'n')
        {
            endLine == 0; // sing the line ended
        }
    }
    return found;
}

int subString(char *word, char *s)
{
    int count = 0;
    char *ptr = word;
    int len2 = strlen(s);
    int len1 = strlen(word);
    int endWord = 1;
    int possible = len1 - len2;
    if (possible > -1)
    {
        for (int i = 0; i < possible; i++)
        {
            count = 0;
            if (*ptr == *s)
            { // ok there is a potenial.
                for (int i = 1; i < len2; i++)
                {
                    if (*(ptr + i) == *(s + i))
                    {
                        count++;
                    }
                }
            }
            if (count == len2)
                return 1;
            ptr++; //check next char;
        }

        return 0;
    }
}

void printLine(char **Line)
{
    int i = 0;
    int end = 1;
    while (!end)
    {
        char *currentword = *(Line + i);
        int len = strlen(currentword);
        for (int j = 0; j < len; j++) //print word i of line,
        {
            printf(" %c", *(currentword + j));
        }

        if ((*(currentword) == '/') & (*(currentword + 1) == 'n'))
        {
            end = 0;
        }

        i++; //if it not end print the next word;
    }
}
