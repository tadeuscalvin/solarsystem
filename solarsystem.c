#include "solarsystem.h"

int main() {
    XYZ p[N];
    init(p);
}

/*
void aceleracao(XYZ *p) {
    int i,j;
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

void velocidade(XYZ *p) {
    int i;
    for(i=0; i<N; i++) {
        p.vx[i]+=p.ax[i]*dt;
    }
}
*/
