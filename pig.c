#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
int all_string[200]; //this is used to save every words and then initialze it again in the main function
bool vowel(int string){
	// this function check if a character is vowel.
 	if( (string == 97) || (string == 101) || ( string == 111) || ( string  == 117) || ( string == 105) || ( string == 65) || (string == 69) || (string == 85) || (string == 73)
  	
		){
		return true;}	
 	else{
		return false;}
}	

void first_vowel(){
	//this file is for the words start with a vowels.
	 int counter = 0;
	 while((all_string[counter] != '\0')){

                                printf("%c", all_string[counter]);
			
                		counter++;}
             
	      
	      printf("yay");

 	      printf(" ");
}

void other(){
  	int string[100]; //this use to save the charcters before the first vowel 
   	int counter = 0;//this counter is used too loop through the all_string
	int cnt = 0; // this counter is used to loop throgh the charchrer before the vowel
	
   	bool  print = false; //this check the occurence of vowel inside a word
	bool upper_case = false; //this check if a word started with an upper case or lowe case
	 if ( (all_string[0] >= 65) & ( all_string[0] <= 90)){
		 upper_case = true;}
	 if ( (all_string[0] >= 97) & (all_string[0] <= 122)){
		 upper_case = false;
	}


   	while((all_string[counter] != '\0')){
		 if(( counter != 0) & (( all_string[counter-1] == 'q')|| ( all_string[counter-1] == 'Q')) & ( (all_string[counter] == 'u') || ( all_string[counter] == 'U'))){//this is for qu
				string[cnt] = all_string[counter];
                               counter++;
                               cnt++;}
   		if (vowel(all_string[counter])& (print == false)){ //This check for the occurence of vowel inside a word. If we found a vowel, I will change the boolean print
			if ( upper_case){
				printf("%c",all_string[counter]-32);
				print = true;
				counter++;}
			if ( !upper_case){
				printf("%c",all_string[counter]);
                                print = true;
                                counter++;}
	
		}
		if((counter != 0) & (print == false) & ((all_string[counter] == 89) || ( all_string[counter] == 121))){ //here I take care of occurence of y in the middle of a word which is considered vowel
			 if ( upper_case){
                                printf("%c",all_string[counter]-32);
                                print = true;
                                counter++;}
                        if ( !upper_case){
                                printf("%c",all_string[counter]);
                                print = true;
                                counter++;}
				}
		if((print == true) ){ //this is for non vowels
			printf("%c",all_string[counter]);
			counter++;
		       
		
		}

		        
		else{//this is for all the character beofre a vowel if it extists.
			       string[cnt] = all_string[counter];
			       counter++;
			       cnt++;
		}	
	
   
   } 
   
   	for( int i = 0; i < cnt; i++){ //looping through the string which saved the characters before the first vowel
		if( i == 0){
			if ( (string[0] >= 97) & ( string[0] <= 122)){
			 	printf("%c", string[0] );}
			if ( (string[0] >= 65) & ( string[0] <= 90)){
				printf("%c", string[0] + 32);}
		}
		else{
	   		printf("%c",string[i]);}
   }	



   	if(print == true){ //if we found a vowel, we print ay
   		printf("ay");
	        printf(" ");
	}
	if(print == false){
		printf(" ");}
  }
void initializer(){
	for(int i = 0; i < 200; i++){
		all_string[i] = '\0';} //i assign everything to null byte

   
                 }
int main(){
        int ch ;
	while(ch != EOF){
		int counter = 0;
		//printf("first stage");
  		initializer();		
		while(!(isspace(ch =getchar())) & (ch != '-')){
			if( ch == EOF){
				break;}
			//printf("second stage");
		 	all_string[counter] = ch;
		 	counter++;
		      	
                 }
 		
		counter = 0;	
        	       
                // if the first letter is a vowel, I use this function 
         	if (vowel(all_string[0])){
	
	   		first_vowel();}
		//if the first one is not vowel, I use this function
          	if((! (vowel(all_string[0])))){

           		other();}
		initializer();
	
	 }
	 return 0;
}

