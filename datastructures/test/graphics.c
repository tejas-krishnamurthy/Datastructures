// To implement the graphics




#include<stdio.h>

#include<graphics.h>

int main()

{

	int gd=DETECT, gm,left = 100,top = 100,right = 200,bottom = 200,x = 300,y=150,radius=50;

	initgraph(&gd,&gm,"contact2.txt");

	circle(x,y,radius);

	bar(left+300,top,right+300,bottom);

	line(line-10,top+150,left+410,top+150);
	
	ellipse(x,y+200,0,360,100,50);

	outtextxt(left+100,top+325,"My C Graphica Program");
	
	closegraph();

	return 0 ; 
}
