void InsertSort(int a[],int len){
	for(int i=1;int <len;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}

void  SelectionSort(int a[],int len){
	for(int i=0;i<len-1;i++){
		int smallest=i;
		for(int j=i;j<len;j++){
			if(a[smallest]>a[j]) smallest=j;		
		}
		if(smallest!=i){
			int tmp=a[i];
			a[i]=a[smallest];
			a[smallest]=tmp;
		}
	}
}