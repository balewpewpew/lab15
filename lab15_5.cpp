#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int x = rand()%4+1;
	int y;
	switch(x){
		case 1: 
		y = *a; 
		*a = *b; 
		*b = y;
		case 2:
		y = *b;
		*b = *c;
		*c = y;
		case 3:
		y = *c;
		*c = *d;
		*d = y;
		case 4:
		y = *d;
		*d = *a;
		*a = y;
	}
} 
