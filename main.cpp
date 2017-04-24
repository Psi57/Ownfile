#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool isRight (unsigned int b[4]) {
	int d = (b[0] + b[1] + b[2] + b[3]) / 4;
	return (b[0] == d) || (b[1] == d) || (b[2] == d) || b[3] == d;
}

int main(int argc, char** argv) {
	unsigned int c;
	unsigned int b[4];
	int count = 0;
	//1073741823
	for(unsigned int i = 2;i<= 100;i++){
		c = i*4;
		for (unsigned int e = 1;e <= c;e++){
			for (unsigned int f = e+1;f <= c;f++){
				for(unsigned int g = f+1;g <= c;g++){
					for(unsigned int h = g+1;h <= c;h++){
						b[0] = e;
						b[1] = f;
						b[2] = g;
						b[3] = h;
						if(isRight(b)){
							count += 1;
						}
					}
				}
			}
		}
		if(count == i){
			cout<< i << endl;
		}
		count = 0;
		cout << i << endl;
		
	}
	cout << "End" << endl;
	return 0;
}
