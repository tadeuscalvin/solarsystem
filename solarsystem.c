#include <stdio.h>
#include <math.h>

int main() {
	int N=11;
	struct {
		double x,y,z,vx,vy,vz,m;
	} planet[N];

	FILE*f1=fopen("data.dat","r");
	int i=0;
	while(fscanf(f1,"%lf %lf %lf %lf %lf %lf %lf\n",&planet[i].vx,&planet[i].vy,&planet[i].vz,&planet[i].x,&planet[i].y,&planet[i].z,&planet[i].m)!=EOF) {
		i++;
	}
	fclose(f1);
	printf("%lf %lf",planet[5].x,planet[0].m);
}

//aceleracao() {
//
//}
