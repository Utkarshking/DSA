#include<iostream>
#include<stdio.h>
#include<graphics.h>
using namespace std;
void DDA(float x1,float x2,float y1,float y2){
	int dx=x2-x1;
	int dy=y2-y1;
	int steps;
	if(abs(dx)>abs(dy)){
		 steps=abs(dx);
	}
	else{
		 steps=abs(dy);
	}
	int xinc=dx/steps;
	int yinc=dy/steps;
	int x=x1;
	int y= y1;
	for(int i=1;i<=steps;i++){
		putpixel(x,y,10);
		 x=x+xinc;
		 y=y+yinc;
		}
	
}
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Program Files (x86)\Dev-Cpp");
float x1,x2,y1,y2;
cout<<"enter the values"<<endl;
cin>>x1>>x2>>y1>>y2;
DDA(x1,x2,y1,y2);
}

