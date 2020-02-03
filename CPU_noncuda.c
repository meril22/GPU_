#include<stdio.h>
#include<time.h>
int main()
{
        int  a[16][16],b[16][16],c[16][16];
        int  i,j,k;
        clock_t start, end;
        double cpu_time;
        for(i=0;i<16;i++){
	       
	        for(j=0;j<16;j++){
	                b[i][j]=1;
	                a[i][j]=1;
	                c[i][j]=0;
	        }
        }
	
	start = clock();
        for(i=0;i<16;i++){
        
		for(j=0;j<16;j++){
			 for(k=0;k<16;k++){
		                c[i][j]+=a[i][k]*b[k][j];
			}
		 }
        }

        for(i=0;i<16;i++){
		
		for(j=0;j<16;j++){
			printf("%d ",c[i][j]);
		}
      	        printf("\n");
        }
        end = clock();

        cpu_time= ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("\nCPU time=%f sec",cpu_time);
	return 0;
}
