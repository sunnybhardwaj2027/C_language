
// Q1--Write a C program to find length of a string.
/*
#include <stdio.h>

int countstring(char str[]);

int main()
{
    char str[100];
    printf("Enter any string: ");
    scanf("%[^\t\n]s",str);
    printf("count=%d",countstring(str));
    return 0;
}

int countstring(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
*/
/*
#include <stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter any string: ");
    scanf("%[^\t\n]s",str);
    printf("count=%d",strlen(str));
    return 0;
}
*/
// Q2--Write a C program to copy one string to another string.
// M-1(using library)
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char newstr[100]="sunny";
    char oldstr[]="bhardwaj";
    strcpy(newstr,oldstr);
    printf("%s",newstr);
    return 0;
}
*/
// M-2(using loop)
/*
#include <stdio.h>

int main()
{
    char str1[100]="sunny";
    char str2[100]="bhardwaj";
    int i=0;
    for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("%s",str2);
    return 0;
}
*/
// M--3(using pointer)
/*
#include <stdio.h>

int main()
{
    char str1[100]="sunny";
    char str2[100]="bhardwAJ";

    char *ptr1=str1;
    char *ptr2=str2;

    int i=0;
    for(i=0;*(ptr2)!='\0';i++){
        *(ptr1+i)=*(ptr2+i);
    }
    *(ptr1+i)='\0';
    printf("ptr1=%s",str1);
    return 0;
}
*/

// Q3--Write a C program to concatenate two strings.
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100]="sunny ";
    char str2[]="bhardwaj";

    strcat(str1,str2);
    puts(str1);
    return 0;
}
*/
// M--2(using pointer)
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "sunny ";
    char str2[] = "bhardwaj";

    char *ptr1 = str1;
    char *ptr2 = str2;

    int i, j; 
    i = strlen(str1);
    for (j = 0; *(ptr2 + j) != '\0'; i++, j++)
    {
        *(ptr1 + i) = *(ptr2 + j);
    }
    *(ptr1 + i) = '\0';
    printf("%s", str1);
    return 0;
}
*/

// Q4--Write a C program to compare two strings.
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[]="sunny";
    char str2[]="bhardwaj";

    printf("%d\n",strcmp(str1,str2));//output-1=means str1>str2.
    return 0;
}
*/
// Q5--Write a C program to convert lowercase string to uppercase.

// M-1(using loop)
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter any small letter word: ");
    scanf("%[^\t\n]s",str);
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            continue;
        }
        str[i]=str[i]-32;
    }
    str[i]='\0';

    printf("capital word: %s",str);
    
    return 0;
}
*/

// M--2(using loop)
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter any small letter word: ");
    scanf("%[^\t\n]s",str);
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
        }
    }
    str[i]='\0';

    printf("capital word: %s",str);
    
    return 0;
}
*/
// M-3(using pointer)
/*
#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;

    printf("Enter any small letter word: ");
    scanf("%[^\t\n]s", str);

    int i = 0;
    for (i = 0; *(ptr + i) != '\0'; i++) {
        if (*(ptr + i) >= 'a' && *(ptr + i) <= 'z') {
            *(ptr + i) -= 32;
        }
    }

    printf("%s", str);
    return 0;
}
*/

// Q6--Write a C program to convert uppercase string to lowercase.
/*
#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;

    printf("Enter any small letter word: ");
    scanf("%[^\t\n]", str);

    int i = 0;
    for (i = 0; *(ptr + i) != '\0'; i++) {
        if (*(ptr + i) >= 'A' && *(ptr + i) <= 'Z') {
            *(ptr + i) += 32;
        }
    }

    printf("%s", str);
    return 0;
}
*/

// Q7--Write a C program to toggle case of each character of a string.
/*
#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;

    printf("Enter any small letter word: ");
    scanf("%[^\t\n]", str);

    int i = 0;
    for (i = 0; *(ptr + i) != '\0'; i++) {
        if (*(ptr + i) >= 'A' && *(ptr + i) <= 'Z') {
            *(ptr + i) += 32;
        }
        else if (*(ptr + i) >= 'a' && *(ptr + i) <= 'z') {
            *(ptr + i) -= 32;
        }
    }

    printf("%s", str);
    return 0;
}
*/

// Q8--Write a C program to find total number of alphabets, digits or special character in a string.
/*
#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;

    printf("Enter something: ");
    scanf("%[^\t\n]", str);

    int i = 0;
    int integer = 0;
    int alphabet = 0;
    int specialchar = 0;

    for (i = 0; *(ptr + i) != '\0'; i++) {
        if (*(ptr + i) >= '0' && *(ptr + i) <= '9') {
            integer++;
        }
        else if ((*(ptr + i) >= 'a' && *(ptr + i) <= 'z') || (*(ptr + i) >= 'A' && *(ptr + i) <= 'Z')) {
            alphabet++;
        }
        else {
            specialchar++;
        }
    }

    printf("Integer = %d\nAlphabet = %d\nSpecial Characters = %d", integer, alphabet, specialchar);

    return 0;
}
*/
// Q9--Write a C program to count total number of vowels and consonants in a string.
/*
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr=str;

    printf("Enter any word: ");
    scanf("%[^\t\n]",str);

    int i=0, vowel=0, consonant=0, None=0;

    for(i=0;*(ptr+i)!='\0';i++){
        if(*(ptr+i)=='a'|| *(ptr+i)=='e'|| *(ptr+i)=='i'|| *(ptr+i)=='o'|| *(ptr+i)=='u' || *(ptr+i)=='A'|| *(ptr+i)=='E'|| *(ptr+i)=='I'|| *(ptr+i)=='O'|| *(ptr+i)=='U'){
            vowel++;
        }

        else if((*(ptr+i)>='a'&&*(ptr+i)<='z')||(*(ptr+i)>='A'&&*(ptr+i)<='Z')){
            consonant++;
        }

        else{
            None++;
        }
    }

    printf("vowel = %d\nconsonant = %d\nNone = %d",vowel,consonant,None);
    return 0;
}
*/

// Q10--Write a C program to count total number of words in a string.
/*
#include <stdio.h>

int main() {
    char str[200];
    printf("Enter any sentence: ");
    
    scanf(" %[^\n]", str);

    int count = 0;
    int i;
    
    for (i = 0; str[i] != '\0'; i++) {
       
        if (str[i] == ' ' || str[i] == '\n') {
            count++;
        }
    }
   
    printf("Number of words: %d\n", count + 1);

    return 0;
}
*/
// Q11--Write a C program to find reverse of a string.
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[200];
    printf("Enter string: ");
    scanf("%[^\n]",str1);

    int i=0;
    int len=strlen(str1);
    for(i=0;i<len;i++){
        str2[i]=str1[len-i-1];
    }
    str2[i]='\0';
    printf("%s",str2);
    return 0;
}
*/

// Q12--Write a C program to check whether a string is palindrome or not.
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter word: ");
    scanf("%s", str);

    int len = strlen(str);
    int i, isPalindrome = 1;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Word is palindrome\n");
    } else {
        printf("Word is not palindrome\n");
    }

    return 0;
}
*/

// Q13--Write a C program to reverse order of words in a given string.---(doubt).

// Q14--Write a C program to find first occurrence of a character in a given string.
/*
#include <stdio.h>

int main()
{
    char str[100];
    char search;

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    getchar();

    printf("Enter charcter to search: ");
    scanf("%c",&search);

    int i=0;
    while(str[i]!='\0'){
        if(str[i]==search){
            printf("'%c' is found at index %d",search, i);
            break;
        }
        i++;
    }
    return 0;
}
*/

// Q15--Write a C program to find last occurrence of a character in a given string
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], search;

    printf("Enter string: ");
    scanf("%[^\n]",str);

    getchar();

    printf("Enter a character that you want to search: ");
    scanf("%c",&search);

    int len=strlen(str);

    int i=len-1;
    while(i>=0){
        if(str[i]==search){
            printf("last index of '%c' is %d",search, i);
            break;
        }
        i--;
    }
    return 0;
}
*/

// Q16--Write a C program to search all occurrences of a character in given string
/*
#include <stdio.h>

int main()
{
    char str[100], search;

    printf("Enter string: ");
    scanf("%[^\n]",str);

    getchar();

    printf("Enter character that you want to search: ");
    scanf("%c",&search);

    printf("'%c' found at the index: ",search);

    int i=0;
    while(str[i]!='\0'){
        if(str[i]==search){
            printf("%d, ",i);
        }
        i++;
    }

    return 0;
}
*/

// Q17--Write a C program to count occurrences of a character in given string
/*
#include <stdio.h>

int main()
{
    char str[100], search;

    printf("Enter string: ");
    scanf("%[^\n]",str);

    getchar();

    printf("Enter that character whose occurance you want to count: ");
    scanf("%c",&search);

    int i=0, count=0;
    while(str[i]!='\0'){
        if(str[i]==search){
            count++;
        }
        i++;
    }

    printf("'%c' occured %d times", search, count);

    return 0;
}
*/
// Q18--Write a C program to find highest frequency character in a string
/*
#include <stdio.h>

int main() {
    char str[100];
    int occurrence[100] = {0};
    int *occur = occurrence;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    int i = 0, j = 0;
    while (str[i] != '\0') {
        int count = 0; 
        j = 0;
        while (str[j] != '\0') {
            if (str[j] == str[i]) {
                count++;
            }
            j++;
        }
        occurrence[i] = count;
        i++;
    }

    
    int max = occurrence[0];
    char charmax = str[0];
    i = 0; 
    while (str[i] != '\0') {
        if (occurrence[i] > max) {
            max = occurrence[i];
            charmax = str[i]; 
        }
        i++;
    }

    printf("'%c' has maximum %d occurrence(s)\n", charmax, max);

    return 0;
}
*/
// Q19--Write a C program to find lowest frequency character in a string
/*
#include <stdio.h>

int main() {
    char str[100];
    int occurrence[100] = {0};
    int *occur = occurrence;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    int i = 0, j = 0;
    while (str[i] != '\0') {
        int count = 0; 
        j = 0;
        while (str[j] != '\0') {
            if (str[j] == str[i]) {
                count++;
            }
            j++;
        }
        occurrence[i] = count;
        i++;
    }

    
    int min = occurrence[0];
    char charmin = str[0];
    i = 0; 
    while (str[i] != '\0') {
        if (occurrence[i] < min) {
            min = occurrence[i];
            charmin = str[i]; 
        }
        i++;
    }

    printf("'%c' has minimum %d occurrence(s)\n", charmin, min);

    return 0;
}
*/

// Q20--Write a C program to count frequency of each character in a string

// #include <stdio.h>

// int main()
// {
//     char str[100];
//     int occurance[100];

//     printf("Enter string: ");
//     scanf("%[^\n]",str);

//     int i=0;
//     int j, count;
//     for(i=0;str[i]!='\0';i++){
//         count=0;
//         j=0;
//         for(j=0;str[j]!='\0';j++){
//             if(str[i]==str[j]){
//                 count++;
//             }
//         } 
//         occurance[i]=count;
//            }

//     occurance[i]='\0';
//     for(int i=0;str[i]!='\0';i++){
//         printf("'%c' has %d occurence\n",str[i],occurance[i]);
//     }
//     return 0;
// }
/*
#include <stdio.h>

int main() {
    char str[100];
    int occurance[100];

    printf("Enter string: ");
    scanf("%[^\n]", str);

    int i = 0;
    int j, count;
    for (i = 0; str[i] != '\0'; i++) {
        count = 0;
        for (j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        occurance[i] = count;
    }

    occurance[i] = '\0'; // Terminating the occurance array

    for (int k = 0; str[k] != '\0'; k++) {
        printf("'%c' has %d occurrence(s)\n", str[k], occurance[k]);
    }

    return 0;
}
*/


