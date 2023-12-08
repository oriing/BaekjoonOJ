#include <stdio.h>

int main(){
	int 	N, n, check;
	char	S[100010];
	char	*s[6];
	
	scanf("%d", &N); n = N/5;
	scanf("%s", S);
	for(int i=0;i<5;i++) s[i+1] = S+(i*n);
	
//	for(int i=1;i<=5;i++){
//		for(int j=0;j<n;j++) printf("%c", s[i][j]);
//		printf("\n");
//	}
	
	for(int p=0;p<n;p++){
		if(s[1][p] == '.') continue; 				// #
		
		if(p+1>=n || s[1][p+1] == '.'){ 			// #.
			check=0;
			
			if(s[4][p] == '#'){						// #.
				printf("1");						// ?
				continue;							// ?
			}										// #
			
			else{ 									// #.
				printf("4");						// ?
				p+=2;								// ?
				continue;							// .
			}
		}
		else{ 										// ###
			if(s[2][p] == '.'){						// 2, 3, 7
				if(s[4][p] == '#')		printf("2");
				else{								//3, 7
					if(s[3][p] == '#')	printf("3");
					else 				printf("7");
				}
			}
			else{									//0, 5, 6, 8, 9
				if(s[4][p] == '.'){					//5, 9
					if(s[2][p+2] == '.')
										printf("5");
					else				printf("9");
				}
				else{								//0, 6, 8
					if(s[3][p+1] == '.')
										printf("0");
					else{							//6, 8
						if(s[2][p+2] == '.')
										printf("6");
						else			printf("8");
					}
				}
			}
			
			p+=2;
		}
	}
	
	return 0;
}
