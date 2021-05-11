# cs3113sp21-project2

## void firstFit(int n, int fit,char block_id, struct alloc arr[])

firstFit implements the first fit algorithm for memory allocation. It checks if the process requested has size less than total size of memory and finds the first empty block to be assigned of size greater than or equal to the process. It traverses the length of the array and will check if a flag variable is equal to zero. Another check implemneted are if the head and end struct variables for the array index are equal to zero indicating there is no memory assigned yet. If the conditon is true, memory is assigned and the head and end variables are updated; flag should be set to one
