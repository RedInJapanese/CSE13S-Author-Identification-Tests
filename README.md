# CSE13S Author Indification Tests
 Some small tests for each module Professor Darrell Long's assignment 7. 

# Description
Contains multiple C files that are meant to test other C files used in the author identification assignment for CSE13S Winter 2022  

Note: These files are small tests and do not account for edge and corner cases for this assignment. These files should be used before moving on to identify.c. Some files will require you to compile other files as well in order to test them

# Files Required
```
node.c/h
ht.c/h
bv.c/h
bf.c/h
pq.c/h
text.c/h
parser.c/h
speck.h
salts.h
metric.h
```

# Running
```
clang -Wall -Werror -Wextra -Wpedantic -o executable_name_here  test_file_here  c_file_you_want_to_test_here  
```

# Building 
```
./executable_name_here
```