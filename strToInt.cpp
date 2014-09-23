#include <iostream>

using namespace std;

enum Status {kValid=0,kInValid};
int g_nStatus=kValid;

long long StrToIntCore(const char *digit,bool minus){
	long long num=0;
	while(*digit !='\0'){
		if(*digit>='\0' &&  *digit <='9'){
			int flag=minus?-1:1;
			num=num*10+flag*(*digit -'0');
			if((!minus&&num>0x7FFFFFFF)||(minus&&num<(signed int)0x80000000)){
				num=0;
				break;
			}
			digit++;
		}
		else{
			num=0;
			break;
		}
	}
	if(*digit=='\0'){
		g_nStatus=kValid;
	}
	return num;
}


int StrToInt(const char *str){
	g_nStatus=kInValid;
	long long num=0;
	
	if(str !=NULL && *str!='\0'){
		bool minus=false;
		if(*str=='+') str++;
		if(*str=='-'){
			str++;
			minus=true;
		}
		if(*str!='\0'){
			num=StrToIntCore(str,minus);
		}
	}
}


int main(){
const	char  str[]="1ret";
	int s=StrToInt(str);
	cout<<s<<endl;
}
}