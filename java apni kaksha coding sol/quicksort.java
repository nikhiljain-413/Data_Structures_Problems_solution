public class quicksort {
    public static int partition(int arr[],int low,int high){
        int i = low-1;
        int pivot = arr[high];
        for(int j=low;j<high;j++){
            if(arr[j]<pivot){
                i++;
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
        }

        i++;
        int temp = arr[i];
        arr[i] = arr[high];
        arr[high] = temp;
        return i;

    }

    public static void Quicksort(int arr[],int low,int high){
        
        if(low<high){
            int pivot_indx = partition(arr,low,high);
            
            Quicksort(arr, low, pivot_indx-1);
            Quicksort(arr, pivot_indx+1, high);
        }
    }
    public static void main(String[] args) {
        int arr[] = {2,3,4,9,8,5};
        int n= arr.length;

        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        Quicksort(arr,0,5);
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
