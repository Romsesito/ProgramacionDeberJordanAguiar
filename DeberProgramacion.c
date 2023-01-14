#include<stdio.h>

int main(){

double v1[]={
0.3,
725913,
0.015,
0.05504,
0.32308,
0.04643,
0.01791,
0.09555,
0.39,
0.58513,
13344,
303123,
0.009,
0.01533,
0.42526,
0.015,
0.01743,
0.32114,
0.26301,
0.14846,
0.698,
0.01818,
0.14657,
0.05495,
0.01181,
0.00891,
0.17393,
0.021,
0.09156,
0.20862,
0.01022,
0.022,
0.02102,
0.008,
0.46,
0.11472,
0.35971,
57229,
0.1165,
0.6859,
0.305,
0.0315,
0.00571,
0.02432,
0.008,
0.6313,
0.27812,
0.00375,
0.024,
0.016,
0.014,
0.58808,
228549,
226848,
0.009,
0.06805,
0.01393,
0.03401,
0.07161,
0.359821,
0.00863,
0.01114,
0.34621,
0.20094,
0.30128,
0.00272,
0.025,
0.128,
1.15,
0.31238,
0.001,
0.01689,
0.08,
0.10712,
0.01981,
0.065,
0.015,
1.98,
0.15,
15,
0.0069,
5074,
5004,
0.75,
1.63,
1399,
0.3,
48107,
0.025,
44028,
0.00513,
2.05,
0.13584,
1.17,
0.13824,
0.00566,
590453,
0.41415,
0.02264,
0.005,
1158,
0.03,
1.4,
0.03113,
0.015,
0.00283,
1425,
6516968,
0.1,
7761243,
42016,
2395898,
17583601,
369021,
3643392,
3807985,
54112,
0.92488,
244059,
1422688,
327.36,
42737184,
111324,
245304,
5884092,
173016,
9755,
13.5,
3.09,
47625,
172692,
30.24,
43273918,
8219,
4846146,
159471,
3517992,
70.29,
144.54,
660996,
30768012,
2198745,
1038708,
0.765,
0.70544,
0.24601,
210735,
231397,
0.0633,
0.14208,
0.0405,
0.1112,
0.82693,
0.012,
0.075,
0.40462,
173335,
128838,
0.7785,
0.66686,
0.01415,
0.00362,
0.022,
0.05576,
0.91108,
255162,
0.005,
134984,
0.01524,
0.04,
0.00698,
0.03568,
0.046,
0.12755,
0.004,
160685,
0.37563,
0.015,
0.238,
0.0949,
0.00447,
0.14167,
0.01989,
0.13152,
0.00934,
0.33746,
0.018,
0.075,
0.04572,
0.0113,
0.04,
0.02075,
0.0072,
0.40751,
0.02742
};

//Desarrolle dos funciones que encuentren el número mayor y menor respectivamente y su índice dentro del vector.

// 1. Declaramos una funcion sizeof.
int longitud=sizeof(v1)/sizeof(v1[0]);
mayor(v1, longitud);
menor(v1, longitud);


}

// 2. Definimos la funcion que se va a encargar de localizar el vector de mayor cantidad en conjunto a su respectivo indice.
void mayor (double v1[], int longitud){

    double mayorv=v1[0];
    int posicion=0;
    int x;
    for (x=1; x<longitud;x++){
        if (v1[x]>mayorv){
            mayorv=v1[x];
            posicion=x;
        }
    }
    printf("\n Vector mayor es: %lf\n Su  indice es %c %d\n", mayorv, 161, posicion);

}

//3. Ahora definimos la funcion que se encarga de la menor cantidad, nuevamente con su respectivo indice.
void menor (double v1[], int longitud){

    double menorv=v1[0];
    int posicion=0;
    int y;
    for (y=1; y<longitud; y++){
        if(v1[y]<menorv){
            menorv=v1[y];
            posicion=y;
        }
    }
    printf( "\n Vector menor es: %lf\n Su  indice es %c %d\n\n", menorv, 161, posicion);
}
//En la pestaña "OUTPUT" se puede observar los vectores mayores y menores con sus respectivos indices.