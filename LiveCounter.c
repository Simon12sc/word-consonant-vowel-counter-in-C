#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
	char text[1000];
	int length = 0;
	int letter=0;

	int i = 0;
	int vowel=0,consonant=0;
	
 printf("Enter text less then 100\n");
	while (text[i] != '\n')
	{
		
		text[i] = getch();
	
		clrscr();

		switch (text[i]){
			case 32:	//space
				i++;
				length++;
			break;
			
			case 127: //backspace
			i--;

	if(text[i]==32){
		letter;
	}else{
			letter--;
	}
	text[i]=' ';
			break;
			
			case 10:
			return 0;
			
			
			default :
			if((text[i]>97 && text[i]<122 )|| (text[i]>65 && text[i]<90)){
				letter++;
			char tempL=text[i];
				if(tempL=='a' || tempL=='A' || tempL=='e' || tempL=='E' || tempL=='i'|| tempL=='I' || tempL=='o' || tempL=='O'|| tempL=='u'|| tempL=='U'){
				vowel++;
			}else{
				consonant++;
			}
			
			}
			i++;
			
			break;
			
		}
		
			printf("\n\n______________________CmonLength____________________________\n\n");
		printf("word:%d\t letter:%d\t consonant: %d\t vowel: %d\n", length,letter,consonant,vowel);
		printf("______________________________\n\n\n");

		printf("=>%s", text);
	}

	return 0;
}
