#include <stdio.h>
/*
	You may assume the following:
	* 1 <= school year <= 4
	* 1.0 <= average grade score <= 4.5
*/

int main() 
{ 
	float year, gpa, tuition=4000;
 	printf("Enter the school year : "); 
	scanf("%f", &year);
 if(year<=4 && year>=1){  
  if(year==1)  {
   printf("Your school tuition : $%.1f", tuition+400);
  } 
  else if(year <= 3 && year >= 2)  {
   printf("Enter your previous semester average grade score : ");
	scanf("%f", &gpa);
   if(gpa<=4.5 && gpa>= 1.0)
   {
	   if(gpa <= 4.5 && gpa >= 4.0)
    {
		   printf("Your school tuition : $%.1f", tuition/2);
    }
	   else if(gpa<4.0 && gpa>=3.7)
    {
		   printf("Your school tuition : $%.1f", tuition/10*7);
    }
	   else if(gpa<3.7 && gpa>=3.5)
    {
		   printf("Your school tuition : $%.1f", tuition/10*9);
    }
	   else if(gpa < 3.5 && gpa >= 1)
    {
     printf("Your school tuition : $%.1f", tuition);
   }
   }
	  else{
    printf("Invalid Input");
   }
     }
   else if(year == 4){
	   printf("Enter your previous semester average grade score : ");
    scanf("%f", &gpa);
	   if(gpa<=4.5 && gpa>= 1.0){
     if(gpa <= 4.5 && gpa >= 4.0)     {
      printf("Your school tuition : $%.1f", tuition/2+1000);
	 }
     else if(gpa<4.0 && gpa>=3.7)     {
      printf("Your school tuition : $%.1f", tuition/10*7+1000);
	 }
     else if(gpa<3.7 && gpa>=3.5)     {
      printf("Your school tuition : $%.1f", tuition/10*9+1000);
	 }
     else if(gpa < 3.5 && gpa >= 1)     {
      printf("Your school tuition : $%.1f", tuition+1000);}
    }    else{
    printf("Invalid Input");
	}
   }   
   }
 else{  printf("Invalid Input");
 } 
}