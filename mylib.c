#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"

char* getWord (){
    #define WORD 30
 char *word;
  word = (char*) malloc(WORD*sizeof(char));
 if (word=!NULL)
 {
printf("Enter your word  \n");
scanf("%s",word);
 }
 return word;
}

void menu(){
    char c;
    printf("choose your action \n");
    printf(" 'a' for printLines \n");
    printf("'b' for printWords \n");
   scanf("%c", &c);
    switch (c)
            { //switch B
            case 'a':
            char* word =getWord();
            int *numofLine=0;
            char*** text=getText(numofLine);
               printOnlyLines(text,numofLine,word);

            case 'b':
               printOnlyWords();

    
            default:
                printf("There no action like this , try again ! ");
            } 
}





int getword(char* w){
    int numOfCharInWord=0;
    #define WordSize 30
    char c;
    char v =' ';
    while((c=!v)&&(numOfCharInWord<=30)){// word didnt end , word didnt pass the limit.
    scanf("%c", w);
     w++;
     numOfCharInWord++;
    }
    return numOfCharInWord;
}

int getline(char** w){
#define lineSize 256
 int numOfCharInLine=0;
 int endLine=1;
while((lineSize<=256)&(endLine)){
numOfCharInLine=getword(*w)+numOfCharInLine;
w++;
 if ((*(w)=='/')&(*(w+1)=='n'))
         {
         endLine=0;
         }
}
return numOfCharInLine;
}

 char*** getText(int* countNumOfLines){
     #define numOfLines 250
    #define MAX 64000//256*250 MAX OF CHARS IN TEXT.
      *countNumOfLines=0;
     char ***text;
    text= (char***)malloc(sizeof(char)*MAX);// there is place in memory for maxTextSize.
      if(text=!NULL)
     {
         char*** ptr=text;
          while (numOfLines<=250){
              *countNumOfLines=*countNumOfLines+getline(**ptr);// i build line by line 
              ptr++;// i point to the next line .

          }
         

     }
     return text;
 }

 **************************************************************************
void printOnlyLines(char*** text,int numOFLines,char* word){
for (int i = 0; i < numOfLines; i++){
    if (searchInLine(*(text+i))==1){
        printLine(*(text+i));
    }

   
}

    
}


 int searchInLine (char** Line){
     char** ptr=Line;
     int endLine=1;
     int found=0;
     while (endLine)&&(!found){
        found=searchInWord(*ptr);
        ptr++;
        
        if (**ptr=='/'&&**(ptr+1)=='n')
        {
            endLine==0;// sing the line ended
        }

     }
     return found;
 }

 int subString(char* word,char* s){
     char* ptr=word;
     int len2=strlen(s);
     int len1=strlen(word);
     int endWord=1;
     int possible=len1-len2;
     if (possible>-1){
 for (int i = 0; i < possible; i++)
 {
     count=0;
     if (*ptr==*s)
     {// ok there is a potenial.
     for (int i = 1; i < len; i++)
     {
        if (*(ptr+i)==*(s+i))
        {
            count++;
        }
     }

     }
    if (count==len2)return 1;
     ptr++;//check next char;
 }
    

return 0 ;
 }
 
void printLine(char** Line){
int i =0;
int end=1;
    while(!end)
{
char* currentword=*(Line+i);
int len=strlen(currentword);
for (int j = 0; j < len; j++)//print word i of line,
{
    printf("%c",*(currentword+j))
}


if (*(currentword)=='/')&(*(currentword+1)=='n') 
{
    end=0;
}

  i++;//if it not end print the next word; 
}
    
}


 