#include <stdio.h>
#include "cs1010.c"

bool check_guess(char *code, char *guess)
{
    int correct_position = 0; 
    int correct_colours = 0;
    bool isCorrect = false;
     
    int code_len = strlen(code);
    char copy_code[code_len];


    for (int i = 0; i < code_len; i++)
    {
        if (code[i] == guess[i])
        {
            correct_position += 1;
            copy_code[i] = '\n';
            guess[i] = '\t';
        } else 
        {
            copy_code[i] = code[i];
        }
    }

    for (int i = 0; i < code_len; i++)
    {
        for (int j = 0; j < code_len; j++)
        {
            if (guess[i] == copy_code[j])
            {
                correct_colours += 1;
                copy_code[j] = '\n';
                guess[i] = '\t';
            }
        }
    }

    if (correct_position == code_len)
    {
        isCorrect = true;
    }

    printf("%d %d\n", correct_position, correct_colours);
    return isCorrect;
}

int main(int argc, char *argv[])
{
    char *code;
    int count = 0;
    char *guess;
    bool isCorrect = false;
    
    code = cs1010_read_word();

    while (count < 8 && !isCorrect)
    {
        guess = cs1010_read_word();
        isCorrect = check_guess(code, guess);
        count += 1;
    }
    return 0;
}
