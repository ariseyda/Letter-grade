#include<stdio.h>

//A computer program receives grade as input. Grade value is checked if it is in range [0, 100]. 
//If value is not in the range, “Invalid grade.” message should be displayed. 
//Else, letter grade should be displayed according to table below.
//AA:100-85 BA:84-70 BB:69-60 CB:59-55 CC:54-45 FD:44-0 

int main(){
	
	int note;
	printf("Please enter your note:");
	scanf("%d",&note);
	
	if(note>=0 && note<=100){
		
		if(note>=85 && note<=100)
		    printf("Letter grade:AA");
		else if(note>=70 && note<=84)
		    printf("Letter grade:BA");
		else if(note>=60 && note<=69)
		    printf("Letter grade:BB");
	    else if(note>=55 && note<=59)
		    printf("Letter grade:CB");
	    else if(note>=45 && note<=54)
		    printf("Letter grade:CC");
		else if(note>=0 && note<=44)
		    printf("Letter grade:FD");						    
	}
	else
	  printf("Invalid grade.");
	  
	
	return 0;
}

