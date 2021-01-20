#include <stdio.h>

void numeric_index(int n, int arr[n], int num_idx[n]) {
    for (int i = 0; i < n; i++) {
        int dum = arr[i], sum = 0;
        while(dum > 0) {
            sum += dum % 10;
            dum /= 10;
        }
        num_idx[i] = sum;   
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int arr[n], int num_idx[n]) {
    for (int i = 0 ;i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num_idx[i] > num_idx[j]) {
                swap(&num_idx[i], &num_idx[j]);
                swap(&arr[i], &arr[j]);
            } else if (num_idx[i] == num_idx[j]) {
                if (arr[i] > arr[j]) {
                    swap(&arr[i], &arr[j]);
                }
            }
        }
    }
}

int weight(int n, int num_idx[n]) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += num_idx[i];
    }
    return ans;
}

int no_of_sequences(int n, int num_idx[n]) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1;j < n; j++) {
            if (num_idx[i] == num_idx[j]) {
                ans++;
            }
        }
    }
    return ans;
}

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0 ;i  < n; i++) {
        scanf("%d", &arr[i]);
    }
    int num_idx[n];
    numeric_index(n, arr, num_idx);
    int wght = weight(n, num_idx);

    sort(n, arr, num_idx);

    int mx_wght = weight(n, num_idx);
    int possible_sequences = no_of_sequences(n, num_idx);
    
    for (int i = 0;i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0;i < n - 1; i++) {
        if (num_idx[i] == num_idx[i + 1]) {
            swap(&num_idx[i], &num_idx[i + 1]);
            swap(&arr[i], &arr[i + 1]);
        }
    }
    for (int i = 0;i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// numeric index - sum of digits of a number
// weight of a sequence s - Sum of (numeric index of each element and its position in the sequence)
// form a sequence S1 from the sequence S and maximize its weight.
// i.e put the elements whose numeric index is large at the end...i.e in inc order
// If multiple elements have the same numeric index, place the smaller element first(in inc order)