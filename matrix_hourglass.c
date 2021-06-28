#include<stdio.h>
#include<limits.h>

int hourglassSum(int *arr) {

int max = INT_MAX,i,j,p,q;
int ar[6][6];
for (p=0;p<6;p++)
{
    for(q=0;q<6;q++)
    {
        ar[p][q]=arr[p][q];
    }
}
 for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(j+2 < 6 && i+2 < 6 ){
                int sum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
                if(sum > max)
                max = sum;
            }
        }
    }
    printf("%d",max);
    return 0;
}
int main()
{
	int arr[6][6],i,j,b[16];
	for(i=0;i<6;i++)
	{   
		scanf("%d %d %d %d %d %d",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],a[i][5]);
		while((a[i][0]&&a[i][1]&&a[i][2]&&a[i][3]&&a[i][4]&&a[i][5])>=-9&&
	    (a[i][0]&&a[i][1]&&a[i][2]&&a[i][3]&&a[i][4]&&a[i][5])<=9)
	    { scanf("%d %d %d %d %d %d",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],a[i][5]);
		}
	 hourglassSum(ar);
	}
}

