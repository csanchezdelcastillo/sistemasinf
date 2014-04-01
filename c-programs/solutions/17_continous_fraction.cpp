#include<stdio.h>
#include<stdlib.h>
void ask_parameters(int *n, int *depth){

    printf("continous fraction\n\n");
    printf("\tbase number: ");
    scanf("%i",n);
    printf("\tlevels of recursion:");
    scanf("%i",depth);
    
}

double f( int depth, double base ){

    double result = base;
	if (depth <=0)
	    return base;
    return base + 1 / f(depth -1 ,base);
}

int main(){

    int n,depth;
    ask_parameters(&n, &depth);


    /*hago la inversa del resultado y le sumo a n*/

    printf("\t\n%.2lf\n",f(depth,n));

    return EXIT_SUCCESS;
}


