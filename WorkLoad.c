#include <stdlib.h>
#include <stdio.h>

int shellSort(int arr[], int n) 
{ 
	for (int gap = n/2; gap > 0; gap /= 2) 
	{ 
		for (int i = gap; i < n; i += 1) 
		{ 
			int temp = arr[i]; 
			int j;			 
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
				arr[j] = arr[j - gap]; 
			arr[j] = temp; 
		} 
	} 
	return 0; 
} 

void printArray(int arr[], int n) 
{ 
	printf("Values are : \n");
	for (int i=0; i<n; i++) 
		printf("%d\t",arr[i]); 
} 


int main()
{
	double p = 0,q = 0,r = 0,s = 0,t = 0,u = 0,v = 0,w = 0,x = 0,y = 0;
	do{do{do{do{do{do{do{do{do{do{
	int arr[999999], i, c; 
	int n = sizeof(arr)/sizeof(arr[0]); 
    for(int i=0; i<999999; i++) 
	{  
	    c = rand();
		arr[i] = c;	
	}
	printf("\nArray before sorting: \n");
	printArray(arr, n); 
	shellSort(arr, n); 
	printf("\nArray after sorting: \n");
	printArray(arr, n); 
    	return 0;

	}while(p<99999999);
   }while(q<99999999);
    }while(r<99999999);
	}while(s<99999999);
    }while(t<99999999);
	}while(u<99999999);
    }while(v<99999999);
    }while(w<99999999);
	}while(x<99999999);
    }while(y<99999999);

	    
	}	

