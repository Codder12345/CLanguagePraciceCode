#include <stdio.h>  
#include <conio.h>
#include<string.h>  
int main ()  
{  
char str[30];  
int i;  
printf (" Enter the string: ");  
scanf (" %s", &str); // take a string  
      
 // use for loop to change string from upper case to lower case  
 for ( i = 0; i <= strlen (str); i++)  
 {  
// The ASCII value of A is 65 and Z is 90  
 if (str[i] >= 65 && str[i] <= 90){
 str[i] = str[i] + 32; //convert Upper to lower 
 }
 else{
 	if(str[i] >= 97 && str[i] <=122){
 str[i] = str[i] - 32; // convert Lower case to Upper 

 }  
}
}
printf (" \n Upper Case to Lower case string is: %s", str);  
return 0;  
}  
