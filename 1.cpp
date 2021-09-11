1. Write a program to find the second largest element in an array.

Approach : 
Here I will use two integers to store the values of highest and second highest integer.
As soon as I encounter a highest integer in the array , I will copy the value highest into the second highest and the highest array value in the highest integer.
Let me explain , 

if(arr[i]>highest)
  second_highest = highest
  highest = arr[i]
  
Now in case I have an array value where it is smaller than the highest but greater than second highest, 
so I will update the value of second highest

if(arr[i]<highest && arr[i]>second_highest)
   second_highest = arr[i]
   
Solution :

Time Complexity - O(n) where n is the size of the array , since here I am traversing the whole array for comparison 

class Solution
{
   public:
    int print2largest(int arr[], int arr_size)
    {
    	int first = -1, second =-1;
    	for(int i=0;i<arr_size;i++)
    	{
    	    if(arr[i]>first)
    	    {
    	        second = first;
    	        first = arr[i];
    	    }
    	    else if(second <arr[i] && arr[i]<first)
    	        second = arr[i];
    	}
    	return second; 
    }

};
