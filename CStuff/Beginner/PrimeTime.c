#include <stdio.h>
#include <time.h>

int main(){
	int num = 0; 

    do{
        printf("Limit: ");
        scanf("%d", &num);
    }while(num<2);

    clock_t t;
    t = clock();
		for (int prim = 2; prim <= num; prim++){
			if (prim == 2 || prim == 3 || prim == 5 || prim == 7){
                continue;
			}
			else if (!(prim % 2 == 0 || prim % 3 == 0 || prim % 5 == 0 || prim % 7 == 0)){ 
                continue;
			}	
		}
	t = clock() -t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;

    printf("Duration: %f sec ", time_taken);
	return 0;
}