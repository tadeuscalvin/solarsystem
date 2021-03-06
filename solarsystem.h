#include <stdio.h>
#include <math.h>

#define N 11
#define G 6.67e-11
#define dt 1

typedef struct {
    double x,y,z,vx,vy,vz,m,ax,ay,az;
} XYZ;

void init(XYZ *p) {
    FILE*f1=fopen("data.dat","r");
    int i=0;
    while(fscanf(f1,"%lf %lf %lf %lf %lf %lf %lf\n",&p[i].vx,&p[i].vy,&p[i].vz,&p[i].x,&p[i].y,&p[i].z,&p[i].m)!=EOF) {
        i++;
    }
    fclose(f1);
}

