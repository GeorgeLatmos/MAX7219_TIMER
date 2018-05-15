# Parallel-Programming

In this folder there are some examples of codes that run in parallel. 

# Bitonic Sort

The first algorithm is Bitonic Sort. We use multiple threads in order to maximize the execution time of sorting an array of 2^n (12<=n<=24) elements. The result compares the serial execution time and the one when running in parallel. We solve this problem using pthreads, IntelCilk and OpenMP.

# KNN Algorithm

The second algorithm is the KNN. The problem that we are solving is finding the k closest neighbors of the total n points. We use OpenMPI in order to solve this problem

# Meanshift Algorithm

The final algorithm is the meanshift. The calculations in this example are performed in GPU, using CUDA.
