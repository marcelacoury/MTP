#include<stdio.h>
#include<math.h>

#define recebe(p,r) \
    ({ printf("Entre com a coordenada X do ponto %s: ", p); \
       scanf("%f", &r.X); \
       printf("Entre com a coordenada Y do ponto %s: ", p); \
       scanf("%f", &r.Y);  \
       printf("Entre com a coordenada Z do ponto %s: ", p); \
       scanf("%f", &r.Z);  })
#define soma(d,f, s)     \
    ({ s.X = d.X + f.X ; \
       s.Y = d.Y + f.Y ;  \
       s.Z = d.Z + f.Z ;  })
#define distancia(d,e)  \
     sqrt(pow(d.X - e.X, 2.0) + pow(d.Y - e.Y,2.0) + pow(d.Z - e.Z, 2.0))

#define mostra(r) \
    ({ printf(" (%g; %g; %g)\n", r.X,r.Y,r.Z);})

struct Ponto {
    float X;
    float Y;
    float Z;
};

int main(){
    struct Ponto a,b,s;
    float d;
    recebe("A", a);
    recebe("B", b);
    soma(a,b,s);
    d = distancia(a,b);
    printf("A distancia entre eles: %g\n", d);
    mostra(s);
    return 0;
}
