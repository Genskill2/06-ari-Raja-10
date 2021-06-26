#include<stdio.h>
#include<cs50.h>

string ari(string s){
int i=0;
float wordcount=0;
float nosentence=0;
float charcount=0;

string arr[]={"Kindergarten","First/Second Grade","Third Grade" ,"Fourth Grade" , "Fifth Grade" ,"Sixth Grade", "Seventh Grade" ,"Eighth Grade" , "Ninth Grade" ,"Tenth Grade" ,"Eleventh Grade" ,"Twelfth grade" ,"College student", "Professor" };
while(s[i]!='\0'){
  if(s[i]==' ')
     wordcount++;
  else if ((s[i]=='.')||(s[i]=='!')||(s[i]=='?'))
     nosentence++;
  else if (s[i]!=',')
     charcount++;
   i++;
  // printf("%c",s[i]);
  }
/*printf("\nchar: %f\n", charcount);
printf("sentence: %f\n", nosentence);
printf("word: %f\n", wordcount);*/

float val=4.71*(charcount/wordcount)+0.5*(wordcount/nosentence)-21.43;
if ((val/((int)val))!=1.0)
    val=(int)val+1;
//printf("%i\n\n", (int)val-1);   
string str=arr[(int)val-1];  
return str;
}
