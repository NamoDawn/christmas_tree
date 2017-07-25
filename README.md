![Holberton logo](https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png)

# Binary Trees

## Author: Naomi Sorrell, Bobby Yang (Batch 2)

## Paragraph Header
You can type any text information in this paragraph block. All the
Markdown (md) decorators can be use inside here in order to markup
your text, they will be keep as-is while being parsed.

## File Breakdown

### 1 - 5-binary_tree_is_root.c


##### Function: binary_tree_is_root

```c
int binary_tree_is_root(const binary_tree_t *node)
```

### 2 - 10-binary_tree_depth.c


##### Function: binary_tree_depth

```c
size_t binary_tree_depth(const binary_tree_t *node)
```

binary_tree_depth - measures the depth of a node

###### Params
- `@node` pointer to the node to measure the depth of

###### Returns
- type size_t or 0 if NULL

### 3 - 3-binary_tree_delete.c


##### Function: binary_tree_delete

```c
void binary_tree_delete(binary_tree_t *tree)
```

binary_tree_delete - deletes full binary tree

###### Params
- `@tree` root to tree

### 4 - 13-binary_tree_nodes.c


##### Function: binary_tree_nodes

```c
size_t binary_tree_nodes(const binary_tree_t *tree)
```

binary_tree_nodes - checks how many nodes have 1 or more childs in a tree

###### Params
- `@tree` root of the tree

###### Returns
- count of how many nodes have 1 or more childs

### 5 - binary_tree_print.c


##### Function: print_t

```c
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
```

print_t - Stores recursively each level in an array of strings

###### Params
- `@tree` Pointer to the node to print
- `@offset` Offset to print
- `@depth` Depth of the node
- `@s` Buffer

###### Returns
- length of printed tree after process

##### Function: _height

```c
static size_t _height(const binary_tree_t *tree)
```

_height - Measures the height of a binary tree

###### Params
- `@tree` Pointer to the node to measures the height

###### Returns
- The height of the tree starting at @node

##### Function: binary_tree_print

```c
void binary_tree_print(const binary_tree_t *tree)
```

binary_tree_print - Prints a binary tree

###### Params
- `@tree` Pointer to the root node of the tree to print

### 6 - 12-binary_tree_leaves.c


##### Function: binary_tree_leaves

```c
size_t binary_tree_leaves(const binary_tree_t *tree)
```

### 7 - 2-binary_tree_insert_right.c


##### Function: *binary_tree_insert_right

```c
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
```

binary_tree_insert_right - inserts node as right-child of a node

###### Params
- `@parent` pointer to the node to insert the right-child in
- `@value` value to store in the new node

###### Returns
- pointer to the created node, or NULL on failure

### 8 - 9-binary_tree_height.c


##### Function: binary_tree_height

```c
size_t binary_tree_height(const binary_tree_t *tree)
```

### 9 - 14-binary_tree_balance.c


##### Function: tree_height

```c
int tree_height(const binary_tree_t *tree)
```

tree_height - gets height of a tree

###### Params
- `@tree` root of the tree

###### Returns
- max height of tree

##### Function: binary_tree_balance

```c
int binary_tree_balance(const binary_tree_t *tree)
```

binary_tree_balance - finds balance factor of tree (height left - height right)

###### Params
- `@tree` root of tree

###### Returns
- balance of tree from root

### 10 - 11-binary_tree_size.c


##### Function: binary_tree_size

```c
size_t binary_tree_size(const binary_tree_t *tree)
```

### 11 - 1-binary_tree_insert_left.c


##### Function: *binary_tree_insert_left

```c
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
```

binary_tree_insert_left - inserts node as left-child of a node parent: pointer to the node to insert the left-child in value:  value to store in the new node

###### Returns
- pointer to the created node, or NULL on failure

### 12 - 0-binary_tree_node.c


##### Function: *binary_tree_node

```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
```

binary_tree_node - creates a binary tree node

###### Params
- `@parent` parent of the created binary tree
- `@value` value of the node

### 13 - 4-binary_tree_is_leaf.c


##### Function: binary_tree_is_leaf

```c
int binary_tree_is_leaf(const binary_tree_t *node)
```



### 14 - main/10-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 15 - main/11-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 16 - main/6-main.c


##### Function: print_num

```c
void print_num(int n)
```

print_num - Prints a number

###### Params
- `@n` Number to be printed

##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 17 - main/8-main.c


##### Function: print_num

```c
void print_num(int n)
```

print_num - Prints a number

###### Params
- `@n` Number to be printed

##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 18 - main/0-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 19 - main/1-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 20 - main/2-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 21 - main/3-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 22 - main/14-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 23 - main/9-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 24 - main/13-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 25 - main/12-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 26 - main/5-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 27 - main/7-main.c


##### Function: print_num

```c
void print_num(int n)
```

print_num - Prints a number

###### Params
- `@n` Number to be printed

##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)

### 28 - main/4-main.c


##### Function: main

```c
int main(void)
```

main - Entry point

###### Returns
- Always 0 (Success)