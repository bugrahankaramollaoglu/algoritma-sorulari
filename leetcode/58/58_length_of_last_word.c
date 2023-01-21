/* Given a string s consisting of words and spaces, return the
length of the last word in the string. A word is a
maximal substring consisting of non-space characters only.
Input: s = "   fly me   to   the moon  "
Output: 4
Input: s = "luffy is still joyboy"
Output: 6
s consists of only English letters and spaces ' '.
There will be at least one word in s.
*/

#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s)
{
    int i = 0;
    int len = 0;
    while (s[len])
        len++;
    len--;
    while (s[len] == ' ')
        len--;
    while (len >= 0 && s[len] != ' ')
    {
        len--;
        i++;
    }
    return i;
}

int main()
{
    char s[] = "  asd   asd   sasd   ";
    printf("%d", lengthOfLastWord(s));
}