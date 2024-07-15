//Bubble sort
// #include <stdio.h>
// #include <conio.h>

// void BubbleSort(int arr[], int N);
// void printArr(int arr[], int N);

// void main()
// {
//    int Arr[] = {0, -5, -10, 10, 5, 15, 20, 35, 25, 40, 30};
//    int sizeArr = sizeof(Arr)/sizeof(int);
//    BubbleSort(Arr, sizeArr);
//    printArr(Arr, sizeArr);
//    getch();
// }

// // Bubble sort
// void BubbleSort(int arr[], int N)
// {
//    int i, j;
//    for (i = 0; i < N; i++)
//    {
//        for (j = N-1; j > i; j--)
//        {
//            if(arr[j] < arr[j-1])
//                swap(&arr[j], &arr[j-1]);
//        }
//    }
// }

// void swap(int* a, int* b)
// {
//    int temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
// }

// void printArr(int arr[], int N)
// {
//    int i;
//    for (i = 0; i < N; i++)
//    {
//        printf("%d\t", arr[i]);
//    }
// }





// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == x)
      return mid;

    // Search the left half
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    // Search the right half
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

// int main(void) {
//   int array[] = {3, 4, 5, 6, 7, 8, 9};
//   int n = sizeof(array) / sizeof(array[0]);
//   int x = 4;
//   int result = binarySearch(array, x, 0, n - 1);
//   if (result == -1)
//     printf("Not found");
//   else
//     printf("Element is found at index %d", result);
// 


// Thuật toán sắp xếp nổi bọt: bubble sort
void BubbleSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (A[j] > A[j + 1])
                swap(A[j], A[j + 1]); // đổi chỗ A[j] và A[j + 1]
}



// selection sort
// void SelectionSort(int A[], int n)
// {
//     int min;
//     for (int i = 0; i < n - 1; i++)
//     {
//         min = i; // tạm thời xem A[i] là nhỏ nhất
//         // Tìm phẩn tử nhỏ nhất trong đoạn từ A[i] đến A[n - 1]
//         for (int j = i + 1; j < n; j++)
//             if (A[j] < A[min]) // A[j] mà nhỏ hơn A[min] thì A[j] là nhỏ nhất
//                 min = j; // lưu lại vị trí A[min] mới vừa tìm được
//         if (min != i) // nếu như A[min] không phải là A[i] ban đầu thì đổi chỗ
//             swap(A[i], A[min]);
//     }
// }


// insertion sort
void InsertionSort(int A[], int n)
{
    int pos, x;
    for (int i = 1; i < n; i++)
    {
        x = A[i]; // lưu lại giá trị của x tránh bị ghi đè khi dịch chuyển các phần tử
        pos = i - 1;
        // tìm vị trí thích hợp để chèn x
        while (pos >= 0 && A[pos] > x)
        {
            // kết hợp với dịch chuyển phần tử sang phải để chừa chỗ cho x
            A[pos + 1] = A[pos];
            pos--;
        }
        // chèn x vào vị trí đã tìm được
        A[pos + 1] = x;
    }
}