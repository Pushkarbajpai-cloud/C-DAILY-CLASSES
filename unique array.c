 #include <stdio.h>

int main() {
	int array[100];
	int size;
	int i;
	int j;
	int k;

	printf("Enter the number of elements: ");
	scanf("%d",&size);

	printf("Enter the elements:\n");
	for (i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}

	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (array[i] == array[j]) {
				for (k = j; k < size - 1; k++) {
					array[k] = array[k + 1];
				}
				size--;
				j--;
			}
		}
	}

	printf("Array after removing duplicate elements:\n");
	for (i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}

	return 0;
}

