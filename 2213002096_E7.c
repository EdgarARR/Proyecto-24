#include<stdio.h>
#include<math.h>

float cb(int nElementos, int arregloX[], int arregloY[]){
int j, n, o, p;
float sumatoriax=0, sumatoriay=0, sumatoriaxy=0, sumatoriaxx=0, variableB=0;

for(j=0;j<nElementos;j++){
	sumatoriax+=arregloX[j];
	}
	
	n=0;
for(n=0;n<nElementos;n++){
	sumatoriay+=arregloY[n];
	}

	o=0;
for(o=0;o<nElementos;o++){
	sumatoriaxy+=arregloX[o]*arregloY[o];
	}
	
	p=0;
for(p=0;p<nElementos;p++){
	sumatoriaxx+=pow(arregloX[p],2);
	}
	
	variableB=((sumatoriay*sumatoriaxx)-(sumatoriax*sumatoriaxy))/((nElementos*sumatoriaxx)-(pow(fabs(sumatoriax),2)));
return variableB;
}

float pm(int nElementos, int arregloX[], int arregloY[]){
int j, n, o, p;
float sumatoriax=0, sumatoriay=0, sumatoriaxy=0, sumatoriaxx=0, variableM=0;

for(j=0;j<nElementos;j++){
	sumatoriax+=arregloX[j];
	}
	
	n=0;
	sumatoriay=0;
for(n=0;n<nElementos;n++){
	sumatoriay+=arregloY[n];
	}

	o=0;
	sumatoriaxy=0;
for(o=0;o<nElementos;o++){
	sumatoriaxy+=arregloX[o]*arregloY[o];
	}

	p=0;
	sumatoriaxx=0;
for(p=0;p<nElementos;p++){
	sumatoriaxx+=pow(arregloX[p],2);
	}
	
	variableM=((nElementos*sumatoriaxy)-(sumatoriax*sumatoriay))/((nElementos*sumatoriaxx)-pow(fabs(sumatoriax),2));
return variableM;
}

int main(){
int arregloX[100], arregloY[100], sumatoriax, sumatoriay, sumatoriaxy, sumatoriaxx, nElementos, i, j, k, l, m, n, o, p, q;
float variableM, variableB, b, mm;
printf("Ingrese el numero de elementos que tendran los arreglos X y Y: ");
scanf("%d",&nElementos);
printf("\n");

for(i=0;i<nElementos;i++){
	printf("Ingrese el elemento %d del arreglo X: ", i+1);
	scanf("%d",&arregloX[i]);
	}
	
for(l=0;l<nElementos;l++){
	printf("Ingresar el elemento %d del arreglo Y: ",l+1);
	scanf("%d",&arregloY[l]);
	}

mm=pm(nElementos, arregloX, arregloY);
b=cb(nElementos, arregloX, arregloY);

printf("El valor de m es: %.2f\n",mm);
printf("Y el valor de b es: %.2f",b);

return 0;
}
