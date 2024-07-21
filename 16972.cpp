#include <bits/stdc++.h>

using namespace std;

int main() {
    mt19937 mt((unsigned int)time(NULL));
    uniform_int_distribution<int> uid(0, INT_MAX);
    auto rd = bind(uid, mt);
//	printf("814\n");
    for(int i=0; i<814; i++){
    	int a = (rd() % 16280) - 8140;
    	int b = (rd() % 16280) - 8140;
    	printf("%d %d\n", a, b);
	}
	
	return 0;
}

