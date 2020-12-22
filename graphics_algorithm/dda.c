// C program implementation for DDA line generation 
#include<stdio.h> 
#include<graphics.h> 

//absolute value
int abs (int n) 
{ 
	return ( (n>0) ? n : ( n * (-1))); 
} 
void wait_for_char()
{

    int in = 0;

    while (in == 0) {
        in = getchar();
    }
}
//DDA Algorithm, which takes co-ordinates
void DDA(int X0, int Y0, int X1, int Y1) 
{ 
	int dx = X1 - X0; 
	int dy = Y1 - Y0; 

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy); 

	float Xinc = dx / (float) steps; 
	float Yinc = dy / (float) steps; 

	float X = X0; 
	float Y = Y0; 
	for (int i = 0; i <= steps; i++) 
	{ 
		putpixel (X,Y,RED);  
		X += Xinc;		  
		Y += Yinc;		  
		delay(100);		 
							 
	} 
} 

int main() 
{ 
	int gd = DETECT, gm; 

    initgraph (&gd, &gm, ""); 
	int X0 = 2, Y0 = 2, X1 = 14, Y1 = 16; 
	DDA(2, 2, 14, 16); 
        wait_for_char();

    closegraph();
	return 0; 
} 

