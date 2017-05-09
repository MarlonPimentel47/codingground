
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/********************************************************************/
/*    ONLY ALTER WHERE INSTRUCTED				                    */
/********************************************************************/


int main(){
	srand(time(NULL));
	printf("\t-----------------------------------\n");
	printf("\t-           Dynamic Arrays        -\n");
	printf("\t-----------------------------------\n");
	printf("\n\t========= After each test you should print our your array using a loop ===========\n\n");
	printf("\n\t========= Your loops should ONLY use pointer arithmetic to iterate ===========\n\n");

	printf("\n\t=========Test #1: Create an integer array of Size 20===========\n\n");
	int array[20];
	int * ptr_array = array;
	printf("\n\t=========Test #1: Using a Loop, insert 20 random values into your Array===========\n\n");
	int i = 0;
    while(ptr_array < &array[20]){
        *ptr_array = (rand() % 20) + 1;
        printf("%d, ", *ptr_array);
        ptr_array++;
    }
	/*
	Example code to create a random value between 1-20: (rand() % 20) + 1
	*/

	printf("\n\t=========Test #2: 'Grow' the array by 1, and insert a value at the end ===========\n\n");
    int second_array[21];
    int * ptr_second = second_array;
    ptr_array -= 20;
    printf("%d\n\n", *ptr_array);
    while(ptr_second < &second_array[21]){
        *ptr_second = *ptr_array;
        if (ptr_second == &second_array[20]){
            * ptr_second = (rand() % 20) + 1;
        }
        printf("%d, ", *ptr_second);
        ptr_second++;
        ptr_array++;
    }

	printf("\n\t=========Test #3: Produce a Random Number between 1 and 20, and increase the current size of your array by that much ===========\n\n");
	int random = (rand() % 20) + 1;
	printf("The random value was %d\n", random);
	int max = 20;
	if (random == max){
	    printf("Can add value to 40th index with no problem\n");
	    int third_array[40];
	    int * ptr_three = third_array;
	    ptr_second -= 21;
	    while(ptr_three < &third_array[40]){
	        *ptr_three = *ptr_second;
	        if (ptr_three > &third_array[20]){
	            *ptr_three = (rand() % 20) + 1;
	        }
            printf("%d, ", *ptr_three);
            ptr_three++;
            ptr_second++;
	    }
	    int size = sizeof(third_array)/sizeof(int);
        printf("\n\nHalf of size is %d\n", size/2);
        int fourth_array[20];
        int * half_ptr = fourth_array;
        ptr_three -= 41;
        while(half_ptr < &fourth_array[20]){
            *half_ptr = *ptr_three;
            printf("%d, ", *half_ptr);
            half_ptr++;
            ptr_three++;
        }
        int final_array[20];
        int * final_ptr = final_array;
        int random_two = (rand() % 20) + 1;
        printf("\nRandom element removed is object # %d\n", random_two);
        int * ptr_random = &final_array[random_two];
        half_ptr -= 20;
        while(final_ptr < &final_array[20]){
            if (final_ptr == ptr_random){
                final_ptr++;
                half_ptr++;
                continue;
            }
            * final_ptr = *half_ptr;
            printf("%d, ", *final_ptr);
            final_ptr++;
            half_ptr++;
        }
    }
    else{
        printf("Must make up to add into 40th index...\n");
        int sum = 21 + random;
        int diff = 41 - sum;
        int third_array_ic[sum];
        int * ptr_third_ic = third_array_ic;
        ptr_second -= 21;
        while(ptr_third_ic < &third_array_ic[sum]){
	        *ptr_third_ic = *ptr_second;
	        if (ptr_third_ic > &third_array_ic[20]){
	            *ptr_third_ic = (rand() % 20) + 1;
	        }
            printf("%d, ", *ptr_third_ic);
            ptr_third_ic++;
            ptr_second++;
	    }
	    printf("\nNow will fill up to 40th index\n");
	    int third_array[40];
	    int * ptr_three = third_array;
	    ptr_third_ic -= sum;
	    while(ptr_three < &third_array[41]){
	        *ptr_three = *ptr_third_ic;
	        if (ptr_three > &third_array[sum - 1]){
	            *ptr_three = (rand() % 20) + 1;
	        }
	       printf("%d, ", *ptr_three);
            ptr_three++;
            ptr_third_ic++;
	    }
        int size = sizeof(third_array)/sizeof(int);
        printf("\n\nHalf of size is %d\n", size/2);
        int fourth_array[20];
        int * half_ptr = fourth_array;
        ptr_three -= 41;
        while(half_ptr < &fourth_array[20]){
            *half_ptr = *ptr_three;
            printf("%d, ", *half_ptr);
            half_ptr++;
            ptr_three++;
        }
        int final_array[20];
        int * final_ptr = final_array;
        int random_two = (rand() % 20) + 1;
        printf("\nRandom element removed is object # %d\n", random_two);
        int * ptr_random = &final_array[random_two];
        half_ptr -= 20;
        while(final_ptr < &final_array[20]){
            if (final_ptr == ptr_random){
                final_ptr++;
                half_ptr++;
                continue;
            }
            * final_ptr = *half_ptr;
            printf("%d, ", *final_ptr);
            final_ptr++;
            half_ptr++;
        }
    }
	printf("\n\t=========Test #3: Attempt to insert a value into your array at index 40===========\n\n");
	printf("\n\t=========Test #3: Expand the array, only if needed, to allow inserting the data===========\n\n");


	printf("\n\t=========Test #4: Reduce the size of the array by half ===========\n\n");
	printf("\n\t=========Test #4: Use integer division to determine the new size of the array ===========\n\n");


	printf("\n\t=========Test #5: Remove a random element from your array ===========\n\n");
	printf("\n\t=========Test #5: The array size should shrink by exactly 1 ===========\n\n");

	printf("\n\t=========Run your code with valgrind to ensure there are no errors ===========\n\n");
	return 0;
}
