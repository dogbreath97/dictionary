#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int numberOfWordsInDict(char **dict){
    int words, i;

    words = 0;
    for(i = 0; i < 10; i++){
        if(dict[i] != '\0')
            words++;
    }

    return words;

}



void Printword(char **dict){
    
    int i = 0;

    while (dict[i] != NULL){
        printf("- %s\n", dict[i]);
        i++;
    }
    
}

void addWord(char **dict, int number){
    char words[100];
    int wordlength = 0;
    int i, k;
   scanf(" %[^\n]s", words);
   
   printf("%s\n", words);

    i = number;
    if(number < 10){
        wordlength = strlen(words);
        //wordlength++;
        //dict[wordlength] = '\0';
        for(k = 0; k < wordlength; k++){
            dict[i] = &words[k];
            i++;
        }
        
       
        
        
}
    
    else
        printf("Dictionary is already full!");
    printf("New dict[number]: %s\n", dict[number]);

}
void main(void){
    int ndict;
    
    char *dict[500];
    int numberofwords;
    numberofwords = 0;
    
    
    numberofwords = numberOfWordsInDict(dict);
    printf("Number of words: %d\n", numberofwords);
    addWord(dict, numberofwords);
    print("Hello");
    //Printword(dict);
    //printf("%p\n", &dict[1]);
    
    

    //printf("%s\n", *dict);
    

}
