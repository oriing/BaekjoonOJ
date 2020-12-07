#include <stdio.h>
#include <string.h>
	char a[20000][52]={};

int qsar(int left, int right){
	int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    int temp;
    do {
        while(arr[i] < pivot)
            i++;
        while(arr[j] > pivot)
            j--;
        if (i<=j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    } while (i<= j);

    if (left < j)
        quickSort(left, j);

    if (i < right)
        quickSort(i, right);
}

int main(){
	int n;
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", a[i]);
		a[i][52]=strlen(a[i]);
	}
	
	return 0;
}
