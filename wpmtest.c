#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int getRandom(int min, int max){
	srand(time(NULL));
	int num = (rand() % (max-min+1)) +min;
	return num;
}

char* getwords(){
	char temp[="";
	int n=0;
        FILE * flp;
        flp = fopen("wordlist.txt", "r");
        char buffer[];
        while (fgets(buffer, sizeof(buffer), flp) !=NULL){
		n++;
        }

	for(int i=0;i<11;i++){
		strcat(temp," ");
		strcat(temp,buffer[getRandom(0,n-1)];
	}	
	char* str =(char*)malloc(strlen(temp)+1);
	strcpy(str,temp);
	return str;
}
int maint(){
	return 0;
}
