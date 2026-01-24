/* time complexity -> how much time an alogrithm takes as input size increases

bingo -> worse case time complexity, represents the upper bound of running time, it gives the worse-case scenario for an algorithm, it describes the maximum time an algorithm can take.

theta and omega 

1.
O(1) -> constant time -> time taken doesn't depend on the input size, the algorithm always runs in the same time
example 1: cout<<"hi"; one time it will run
example 2: for(int i=0;i<10;i++){ } 10 times it will run

2.
O(log n) -> logarithmic time -> time grows logarithmically as the input increases, often seen in algorithms that divide the input into half
example 1: binary search 

3.
O(n) -> linear time -> time grows directly proportional to input size
example 1: loop running for n times, as n increases, time increase
for(int i=0;i<n;i++){ }

4. 
O(n log n) -> linearithmic time -> a mix of linear and logarithmic
example 1: divide and conquor (quick and merge sort)

5.
O(n^2) -> quadratic time -> time grows proportionally to the square of input size
for(int i=0;i<n;i++){
    for(int j=0;j<n;i++){
        
    }
}
*/    