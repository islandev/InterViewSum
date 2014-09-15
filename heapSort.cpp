
typedef int ElementType;
void AdjustHeap(ElementType H[], int start ,int end){
	ElementType temp=H[start];
	for(int i=2*start +1 ; i< end; i*=2){
		if(i<end&&H[i]<H[i+1]){
			++i;
		}
		
		if(temp>H[i]){
			break;
		}
		H[start]=H[i];
		start=i;
	}
	H[start]=temp;
	
}

void HeapSort(ElementType A[],int n){
	for(int i<n/2;i>0;--i){
		AdjustHeap(A,i,n);
	}
	
	for(int i=n-1;i>0;--i){
		ElementType temp=A[i];
		A[i]=A[0];
		A[0]=temp;
		
		AdjustHeap(A,0,i-1);
	}
}