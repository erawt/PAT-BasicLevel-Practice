#include <stdio.h>

int main(){
	char a[100];
	int b[100];
	int sum = 0;
	int count;
	
	
	for (int i = 0; i < 100; i++){
		 a[i] = getchar();
		 if (a[i] == '\n')
			 break;
		 else{
			 sum += (int)(a[i]-'0');
		 }
	}

	for (int j = 0; sum != 0; j++){
		if (sum != 0){
			int n;
			n = sum % 10;
			sum = sum / 10;
			b[j] = n;
			count = j;
		}
    }

	for (int k = count; k > 0; k--){
		switch (b[k]){
			case 0:
				printf("ling ");
				break;
			case 1:
				printf("yi ");
				break;
			case 2:
				printf("er ");
				break;
			case 3:
				printf("san ");
				break;
			case 4:
				printf("si ");
				break;
			case 5:
				printf("wu ");
				break;
			case 6:
				printf("liu ");
				break;
			case 7:
				printf("qi ");
				break;
			case 8:
				printf("ba ");
				break;
			case 9:
				printf("jiu ");
				break;
			default:
				break;
		}
		
	}

	switch (b[0]){
	case 0:
		printf("ling");
		break;
	case 1:
		printf("yi");
		break;
	case 2:
		printf("er");
		break;
	case 3:
		printf("san");
		break;
	case 4:
		printf("si");
		break;
	case 5:
		printf("wu");
		break;
	case 6:
		printf("liu");
		break;
	case 7:
		printf("qi");
		break;
	case 8:
		printf("ba");
		break;
	case 9:
		printf("jiu");
		break;
	default:
		break;
	}
		
	


	return 0;
}