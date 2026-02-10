# Data Structures in Cpp

A git repo , dedicated by me , for learning and creating data structures in cpp.

## Contents

// Miscellaneous
(\*) .gitignore :
Contains most of the .exe files created while testing.
Also contains other folders/files that are not to be included publically or tracked by git.

// Main contents:

(1) binaryTree : Binary (Search) Tree
(2) linkedList : Linked List
(3) stack : Stack

## Structure

### Syntax followed:

    Most of the files follow the syntax as defined in the "synthic.md" from this repo:
    https://github.com/mahendra-sharma-official/synthic

    Note:
    However , I'm just a human and I can make errors so the syntax may not entirely be followed as defined \nAlso, initial files may not follow the above convention at all as the repo was created after those\n files were created.

    PS: Those files may be edited later on to follow the same syntax as well.

## What works, what doesn't and what's missing:

### Binary Tree

// The following works:

1. Initializaiton:
   ` Node();`
   or
   `Node(value);`

   Note: Value must be a float.

2. Functions/methods
   ```cpp
   .insert(value)
   .search(value)
   .searchPath(value)
   ```

```

// The following functionality are missing:

(a) Deletion

//Traversal methds
(b) Depth-first search (DFS)
(c) Breadth-first search (BFS)
(d) Others
```

### Linked List
    // The following works:

1.Initialization:

```cpp
    Node();
    Node(float v);
````

2. Functions / methods:

```cpp
   .\_InsertItem(float value);
   .searchFor(float value);
   .\_PopFront();
   . \_PopBack();
   .\_IsEmpty();
   .\_PushBack(float value);
   .\_PushFront(float value);
   .\_PrintList();
```

// The following doesn't work (yet):

```cpp
.\_SortList();
.\_MergeList(LinkedList otherList);
```

### Stack

//The following works:

1.  Initialization:

```cpp
    `Stack()`
    or
    `Stack(value)`
```

2.  Functions/methods:

    ```cpp
    .\_Push(float val);
    .\_Pop();
    .\_Top();
    .\_Bottom();
    .\_Search(float value);
    .\_PrintStack();
    .\_GetCurrentSize();
    .\_GetSpaceAvailable();
    .\_IsEmpty();
    .\_IsFull();
    ```

// The following doesn't work (yet):

`.\_ResizeStack(int new_max_size);`

### Author's Note:

````
This repo was solely created for the purpose of me learning : how to create data structures, use them, and \n
cpp alongside the journey. So while there may be logic errors and redundant or unnecessary code blocks in \n
the code. All I can say is I'm learning as I go forward.  ```
````
