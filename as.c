#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int matriz1 [3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int matriz2 [3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    for(i=0; i<3; i++){
    	for(j = 0; j < 4; j++){
    		 printf("%d\n", (matriz1+1));
    	}

    }

  system("pause");
  return 0;

}