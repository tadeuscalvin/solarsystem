#include <stdio.h>
#include <math.h>

#define N 11

typedef struct {
	double x,y,z,vx,vy,vz,m;
} XYZ

void init() {
	FILE*f1=fopen("data.dat","r");
	int i=0;
	while(fscanf(f1,"%lf %lf %lf %lf %lf %lf %lf\n",&planet[i].vx,&planet[i].vy,&planet[i].vz,&planet[i].x,&planet[i].y,&planet[i].z,&planet[i].m)!=EOF) {
		i++;
	}
	fclose(f1);
}

int main() {
	XYZ planet[N];
	init();
}

//aceleracao() {
//
//}
