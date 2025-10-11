//  A subarray is a contiguous sequence of elements within an array
//  subarray for  an array {1,2,1} would be;
// {1},{2},{1,2},{2,1},{1,2,1},{}
// A subarray should be a contiguous subsequence of the parrent array
// {1,1} is not considered to be a subarray as 2 in the middle is skipped, thus its not contiguous subseq anymore
// order of elements in the sub array should be same as in the array 
// thus {2,1,1} is not subarr while {1,2,1} is.

// SUBSTRING-->exactly same thing as a subarray but in context of a string

// SUBSEQUENCE --> A seq that can be derived from another sequence by deleting 
//                 some or no elements without changing the order of remaining elements.

// subseq is a generalised subarr where rules of contiguity doesnt apply i.e.
// <a,a> is a perfectly valid subseq of <a,b,a> whereas it is not valid in subarr
// subseq still need to preserve element order just like subarray , <b,a,a> is not valid


// SUBSET-->A set is subset of another set if all its element are contained by that set
// this means neither continuity nor order of elements matter
// {1,2} and {2,1} is the same subset thus we cannot list the both
// unlike string   , arrays and sequences , sets do not allow duplicate elements.
// as a result {1,2,1} is not valid subset of {1,2,1}