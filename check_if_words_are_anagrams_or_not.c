// Program to check if the words are anagrams or not

#include <stdio.h>
#include <string.h>

void anagram_checker(char word1[], char word2[])
{
    word1 = strlwr(word1);
    word2 = strlwr(word2);
    int w1_length = strlen(word1);
    int w2_length = strlen(word2);
    int w1_count[26] = {0}; // sare elements ko zero krne k liye aisa kiya
    int w2_count[26] = {0};
    int flag = 0;

    if (w1_length != w2_length)
    {
        printf("%s and %s are not anagrams\n", word1, word2);
    }
    else
    {
        for (int i = 'a'; i <= 'z' && word1[i]!='\0' && word2[i]!='\0' ; i++)
        {
            if(i == word1[i])
            {
                w1_count[i]++;
            }
            if(i == word2[i])
            {
                w2_count[i]++;
            }
        }
        for(int i = 0;i<26 ;i++)
        {
            if(w1_count[i]!=w2_count[i])
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("%s and %s are anagrams\n", word1, word2);
        }
        else
        {
            printf("%s and %s are not anagrams\n", word1, word2);
        }
    }
}

int main()
{
    char word1[20], word2[20];
    printf("Enter two words to be checked: ");
    scanf("%s %s", &word1, &word2);

    anagram_checker(word1, word2);

    return 0;
}