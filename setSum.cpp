#include <iostream>
using namespace std;

void adjustHeap(int array[],int  start,int length){
	int record=array{start};
	int cursor=start;
	while(cursor<length/2){
		int child=2*cursor+1;
		if((child+1) < length && array[child] < array[child+1])
                        ++child;

                if(record < array[child]){
                        array[cursor] = array[child];
                        cursor = child;
                } else
                        break;
	}
	array[cursor]=record;

}

void  heapSort(int array[],int length){
	 if(array == NULL || length <= 1)
                return;

        for(int start = length/2 - 1; start >= 0; --start)
                adjustHeap(array, start, length);

        for(int len = length  ; len > 1; --len){
                int tmp = array[0];
                array[0] = array[len-1];
                array[len -1] = tmp;
                adjustHeap(array, 0, len-1);
        }
}

int find(int S[], int N)
{
        if(S == 0 || N <= 0)
                return -1;

        heapSort(S,N);

        for(int C = N - 1; C > 0 ; --C){
                int A = 0;
                int B = C - 1;

                while (A <= B){

                        if(S[A] + S[B] == S[C])
                                return S[C];
                        else if(S[A] + S[B] < S[C])
                                ++A;
                        else
                                --B;
                }
			}
}
				
				