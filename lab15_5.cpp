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
	
    for(int i=0;i<10;i++){
		int random = rand()%4;
    if (random == 0) {
        swap(*a,*b);
    }else if (random == 1){
		swap(*a,*c);
    }else if (random == 2){
        swap(*a,*d);
    }else {
        swap(*b,*c);
    }
	}
}

