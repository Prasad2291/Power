#include<stdio.h> 
  
float powerInt(float x, int y) 
{ 
    float temp; 
    if( y == 0) 
       return 1; 
    temp = powerInt(x, y/2);        
    if (y%2 == 0) 
        return temp*temp; 
    else
    { 
        if(y > 0) 
            return x*temp*temp; 
        else
	//b1
            return (temp*temp/x); 
    } 
}   
float cube(float x){
	int temp = 1;
	//b2
	if(x == 0){
		return 0;
	}
	int i = 0;
	for(i = 0; i < 3; i++){
		temp = temp * x;
	}
	return temp;
}
/* Program to test function power */
int main() 
{ 
    float x = 2; 
    int y = -3; 
   printf("Enter the base\n");
    
    scanf("%f", &x);
   printf("Enter the power\n");
    scanf("%d", &y);    
	printf("%f\n", powerInt(x, y)); 
	printf("cube is:   %f\n", cube(x)); 
    return 0; 
}
