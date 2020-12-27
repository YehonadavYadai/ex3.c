#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"
#include "my lib.c"

char* getWord (){
    #define WORD 30
 if (char* word =(*char)malloc(WORD(sizeof(char))));// there is place in memory for maxTextSize.
 {
printf("Enter your word  \n");
scanf("%s",word);
 }
 return word;
}

void menu(){
    char c;
    printf("choose your action \n")
    printf(" 'a' for printLines \n")
    printf("'b' for printWords \n")
   scanf("%c" & *c);
    switch (*c)
            { //switch B
            case 'a':
               printOnlyLines();

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
    while((c=!'')&&(numOfCharInWord<=30)){// word didnt end , word didnt pass the limit.
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
while(countword<=256)&&(endLine){
numOfCharInLine=getword(*w)+numOfCharInLine;
w++;
 if (*(w)=='/'0)&&(*(w+1)=='n')
         {
         endLine=0;
         }
}
return numOfCharInLine
}

 char*** getText(){
     #define numOfLines 250
     int countNumOfLines=0;
     if (char*** text =(***char)malloc(250*256*(sizeof(char))));// there is place in memory for maxTextSize.
     {
         char*** ptr=text;
          while (numOfLines<=250){
              countNumOfLines=countNumOfLines+getline(**ptr);// i build line by line 
              ptr++;// i point to the next line .

          }
         

     }
     return text;
 }

 **************************************************************************
 void searchInLine (char** Line){
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
 



 