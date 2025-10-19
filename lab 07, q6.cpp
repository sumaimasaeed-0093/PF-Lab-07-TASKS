#include <stdio.h>
int main(){
	int vowels=0, consonants=0,i=0;
	char str[30];
	printf("Enter a word:"); //entering alpha characs only
	scanf("%s", str);
	while(str[i]!= '\0'){ //counts for one word, words more than 1 would be ignored 
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o'|| str[i] =='u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I'|| str[i] == 'O'|| str[i] =='U'){
			vowels = vowels +1;
		}
		else{
			consonants= consonants +1;
		}
		++i;
	}
	printf("Number of vowels your word contains are %d\n", vowels);
	printf("Number of consonants your word contains are %d", consonants);
	return 0;
}



