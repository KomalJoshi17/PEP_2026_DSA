/*
    heap is a complete binary tree which follows the heap order property

        -> complete binary tree (CBT) :- all levels are completely filled except the last level, the last level is filled from left to right
        -> heap order property :- 
            * max heap -> every parent node is greater than or equal to its children (largest element is always at root)
            * min heap -> every parent node is smaller than or equal to its children (smallest element is always at root)
    
    MTR -> heap is not a BST
    *** for 1-based indexing, for any node,
            left child -> 2 * ith index
            right child -> 2* (ith index + 1)
            parent -> i/2

    *** for 0-based indexing, for any node,
            left child -> 2 * (ith index + 1)
            right child -> 2* (ith index + 2)
            parent -> (i-1)/2
*/