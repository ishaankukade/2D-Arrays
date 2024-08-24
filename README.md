# Arrays
# AIM
To understand how Arrays work in C++
# THEORY
An array stores a fixed-size sequential collection of elements of the same type. All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.
For example, an array containing 5 integer values of type int called foo could be represented as:


![image](https://github.com/user-attachments/assets/d73f03ce-9f4a-465f-a93a-416cca10824e)

where each blank panel represents an element of the array. In this case, these are values of type int. These elements are numbered from 0 to 4, being 0 the first and 4 the last; In C++, the first element in an array is always numbered with a zero (not a one), no matter its length.

1. DECLARING ARRAY
To declare an array in C++, we must specify the type of elements and the number of elements required by an array −

type arrayName [ array_size ];

The array_size must be an integer constant greater than zero and type can be any valid C++ data type.




2. INITIALISING ARRAY
You can initialize C++ array elements either one by one or using a single statement as follows −

int arr[5] = {1000, 2, 3, 17, 50};

The number of values between braces { } can not be larger than the number of elements that we declare for the array between square brackets [ ].

3. Accessing Array Elements
An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array. For example −

int num = arr[9];

The above statement will take the 10th element from the array named arr and assign the value to num variable.

# OUTCOME OF THE CODE
We try to use array to do some simple tasks like;
1. Print full array
2. Find the biggest and the smallest number
3. Reverse an array
4. Search for numbers in the array
5. Sum of all numbers of an array

# EXPLANATION
1. To print the full array
We use a for loop to print all the elements of the array
2. To print the biggest and the smallest value
We again use a for loop that runs N times (N=number of elemensts) and use an if statement to find the biggest or smallewst number.
3. To reverse an array
We use another for loop and find the peak vales by comparing an the values of an array with an index before and after the value.
4. To search for numbers
We use another for loop and compare values until we find the required value, if not we print that the vales are not found.
5. To find sum of all numbers
We use for loop and as we move from element to another inside the loop, we add the numbers simultaneously amd print the sum after we reach the last element.


