/*output
 *Matched word cat
Matched word hat
The number of matched words are 2
*/

#include <stdio.h>
int comparefont(char *str1, char *str2)
{
    int freq[26] = {0};
    for(int i=0;str1[i];i++)
    {
        freq[str1[i]- 'a']++;
    }
    
    for(int i=0;str2[i];i++)
    {
        if((freq[str2[i] - 'a'] == 0))
        {
            return 0;
        }
        freq[str2[i] - 'a']--;
    }
    return 1;
}
int main()
{
    char str1[] = "atach";
    char *str2[] = {"cat", "bt", "hat", "tree"};
    int len = sizeof(str2) / sizeof(str2[0]);
    int count = 0;
    
    for(int i=0;i<len;i++)
    {
        if(comparefont(str1, str2[i]))
        {
            count++;
            printf("Matched word %s\n", str2[i]);
        }
        
    }
    printf("The number of matched words are %d\n",count);
    

    return 0;
}
