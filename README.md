# sigtuple
In the first problem i used a 2D memory vector to store my previous calculations and use them dynamically when required.
we start finding maximum denomination we can get by selecting a array/range of 1 and then move from left to right. we fill results in marix initially i =j for size 1 array/range. we hen do same but selecting range /array of 2 this time and compare from previous result from memory if memory has maximum then we calculated then we use maximum one. we then do same for length 3 then 4 till we array/range = size of original array. we select memory locaion using the flags p and q which are also extreme positions of array/range selected. 

2nd problem- we sort the given array then use two flags p and q at two opposite ends of array and use 3 conditions to manipulate the movement of flags and check if condition satisfies.
