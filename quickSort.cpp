void  quickSort(int A[],int l,int h){
	if(l>h) return;
	int first=l;
	int last=h;
	int key=a[first];
	while(first<last){
		while(first<last&&a[last]>=key) --last;
		a[first]=a[last];
		while(first<last&&a[first]<=key) ++first;
		a[last]=a[first];
	}
	a[first]=key;
	quickSort(A,l,first-1);
	quickSort(A,last+1,h);
	
}