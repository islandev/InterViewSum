


#include<stdio.h>
#include<stdlib.h>

void maxHeap(int A[],int len,int i)
{
    int l,r,large,temp;
    l=2*i;
    r=2*i+1;
    large=i;
    if(l<len)
    {
        if(A[l]>A[i])
        {
            large=l;
        }
    }
    if(r<len)
    {
        if(A[r]>A[large])
        {
            large=r;
        }    
    }

    if(large!=i)
    {
        temp=A[large];
        A[large]=A[i];
        A[i]=temp;
        maxHeap(A,len,large);
    }
}

void minHeap(int A[],int len,int i)
{
    int l,r, min,temp;
    l=2*i;
    r=2*i+1;
    min=i;
    if(l<len)
    {
        if(A[l]<A[i])
        {
            min=l;
        }
    }
    if(r<len)
    {
        if(A[r]<A[min])
        {
            min=r;
        }    
    }

    if(min!=i)
    {
        temp=A[min];
        A[min]=A[i];
        A[i]=temp;
        minHeap(A,len,min);
    }
}


int absolute(int A[], int len)
{
	/*
    int A[11]={4,1,3,2,16,9,10,14,8,7,6};
	*/
    int i;
	int max, min;
	for(int i=len/2-1;i>=0;--i)
	{
	    minHeap(A, len, i);
	}
	//fprintf(stdout, "min %d\n", (min = A[0]));
	for(int i=len/2-1;i>=0;--i)
	{
	    maxHeap(A, len, i);
	}
	//fprintf(stdout, "max %d\n", (max = A[0]));
	//fprintf(stdout, "absolute is %d\n", max -min);
	return max -min;
}
