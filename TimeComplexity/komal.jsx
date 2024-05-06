import java.util.*;

public class UserMainCode {

    public int totalCount(int input1, int[] input2) {
        int distinctKCount = 0;
        
        for (int K = 1; K <= input1; K++) {
            int[] B = Arrays.copyOf(input2, input2.length); // Create a copy of the array to avoid modifying the original array
            
            // Check if swapping any two elements (excluding the Kth element) can sort the array
            for (int i = 0; i < input1; i++) {
                if (i != K-1) {
                    for (int j = i+1; j < input1; j++) {
                        if (j != K-1) {
                            // Swap elements at indices i and j
                            int temp = B[i];
                            B[i] = B[j];
                            B[j] = temp;
                            
                            // Check if the array is sorted after the swap
                            if (isSorted(B)) {
                                distinctKCount++;
                            }
                            
                            // Revert the swap to try the next combination
                            temp = B[i];
                            B[i] = B[j];
                            B[j] = temp;
                        }
                    }
                }
            }
        }
        
        return distinctKCount;
    }
    
    // Function to check if an array is sorted
    private boolean isSorted(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
}