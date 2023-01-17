#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 
int main(void)
{
    // this is the prompt for the text
    string t = get_string("text: ");
    
    // these are the calculations declareations 
    float letters = 0, words = 1, sentences = 0, text = 0;
    int  i, j, n ;
    
    // for loop to check every char in the string 
    for (i = 0; t[i] != 0; i++)
    {
        if (isalpha(t[i]) != 0)
        {
            letters++;
        }
        else if (isspace(t[i]) != 0)
        {
            words++ ;
        }
        
    }
    
    // for loop to detect end of sentences 
    for (j = 0, n = strlen(t); j < n ; j++)
    {
        if (t[j] == '.' || t[j] == '!' || t[j] == '?')
        {
            sentences++;
            
        }
    }
   
    //average number of letters per 100 words
    float l = letters / words * 100;
    
    //average number of sentences per 100 words 
    float s = sentences / words * 100;
   
    //Coleman-Liau index equation
    float index = 0.0588 * l - 0.269 * s - 15.8;
    
    // different outputs depending on index result 
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index < 3)
    {
        printf("Grade 2\n");
    }
    else if (index >= 3 && index < 4.6)
    {
        printf("Grade 3\n");
    }
    else if (index >= 4.6 && index < 6.6)
    {
        printf("Grade 5\n");
    }
    else if (index >= 6.6 && index < 7.6)
    {
        printf("Grade 7\n");
    } 
    else if (index >= 7.6 && index < 8.6)
    {
        printf("Grade 8\n");
    }
    else if (index >= 8.6 && index < 9.6)
    {
        printf("Grade 9\n");
    }
    else if (index >= 9.6 && index < 16)
    {
        printf("Grade 10\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }

}




