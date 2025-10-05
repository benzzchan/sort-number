# Sort Number 🪄
A simple C program to sort numbers using the **Quick Sort** algorithm.  
Supports **ascending** and **descending** order and comes with a nice language option for help **(French/English)**.

## Features
- Sort numbers in **ascending** or **descending** order.
- Option to display help messages in **French** or **English** (`-hen` for English).
- Dynamic allocation of arrays based on user input.
- Clear explanation of **Quick Sort** in the program help.
- **User input error handling**: the program checks invalid input and asks again until valid.
- Easy to understand prompts and messages for a smooth user experience.
- Colorful terminal messages for better readability.

## Usages 
### Compile with Make
```bash
make
./sort -c       # Sort in ascending order
./sort -d       # Sort in descending order
./sort -hen     # Show help messages in English
./sort -h       # Show help messages (in French by default)
make clean
```

## Demo
### Sort (Ascending)
![Program Demo](img/sort-ascending.png)
### Sort (Descending)
![Program Demo](img/sort-descending.png)