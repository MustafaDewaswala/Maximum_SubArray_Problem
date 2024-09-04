# Maximum_SubArray_Problem
                             MAXIMUM SUB-ARRAY SUM


I have used C programming language to solve this problem although I have an option
to use C++ in which things would be more easy to me to solve it yet I have chosen C
programming language to showcase my coding strength in low-level programming.

Plz read carefully till last.
Don't directly jump to the code as I have used notepad as an editor to write
programming codes and not IDE's so the codes are not that beautified or indented.



1) Working of code in eg1.c :- 

   In eg1.c file, brute-force method is used which generates all the 
   combinations and find maximum from them.

   example: if an array of 5 elements are given then it will traverse it as 
   described below :

	0
	0 1
	0 1 2
	0 1 2 3
	0 1 2 3 4
	1
	1 2
	1 2 3
	1 2 3 4
	2
	2 3
	2 3 4
	3
	3 4
	4

   and after traversing all this indices and finding their respective sums, it will 
   check for the maximum from it and the maximum will be our answer, also it will 
   generate that contiguous sub-array from that array whose sum was maximum.

   In this way code in eg1.c file works.

------------------------------------------------------------------------------------


2) Working of code in eg2.c :-

   In eg2.c file, non brute-force (optimized solution) method is used which is 
   popularly known as KADANE's solution in which local_max and global_max is 
   calculated by traversing all the elements of array and since it takes less steps
   so its time complexity is also less in compare to brute-force method.
   
   Initially set local_max and global_max to array[0th index].

   At each traverse for an index ( from 1 to size-1 ) : 

   local_max = maximum of ( array[index] , local_max + array[index] )
   global_max = maximum of ( local_max , global_max )

   and the final value of global_max will be the answer.

   In this way code in eg2.c file works.


------------------------------------------------------------------------------------


If you want to get this solution in C++ programming language,

mail me at : dewaswalamustafa02@gmail.com

and I will mail the solution within 24 hours. 

THANK YOU FOR THE PATIENCE !
