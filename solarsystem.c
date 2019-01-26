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

int main() {
    XYZ p[N];
    init(p);
}
/*
void aceleracao() {
    double R;
    for(j=0; j<N; j++) {
        if(i!=j) {
            R=pow(pow(p[i].x-p[j].x,2)+pow(p[i].y-p[j].y,2)+pow(p[i].z-p[j].z,2),3/2.);
            p.ax[i]+= -G*p[j].m*(p[i].x-p[j].x)/R;
            p.ay[i]+= -G*p[j].m*(p[i].y-p[j].y)/R;
            p.az[i]+= -G*p[j].m*(p[i].z-p[j].z)/R;
        }
    }
}

void velocidade() {
    for(i=0; i<N; i++) {
        p.vx[i]+=p.ax[i]*dt;
    }
}*/
