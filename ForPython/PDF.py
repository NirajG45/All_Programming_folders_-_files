from fpdf import FPDF

# Create PDF object
pdf = FPDF()
pdf.set_auto_page_break(auto=True, margin=15)
pdf.add_page()
pdf.set_font("Arial", style='', size=12)

# Title
pdf.set_font("Arial", style='B', size=16)
pdf.cell(200, 10, "100+ C Programming Practice Questions", ln=True, align='C')
pdf.ln(10)

# Questions List
questions = [
    "1. Write a program to print 'Hello, World!' in C.",
    "2. Write a C program to take two numbers as input and print their sum.",
    "3. Write a program to find the largest of three numbers using if-else.",
    "4. Write a program to check if a number is even or odd.",
    "5. Write a program to find the factorial of a number using recursion.",
    "6. Write a C program to swap two numbers without using a third variable.",
    "7. Write a program to reverse a given number.",
    "8. Write a program to check whether a number is prime or not.",
    "9. Write a C program to find the GCD and LCM of two numbers.",
    "10. Write a program to print the Fibonacci series up to N terms.",
    "11. Write a program to check whether a number is palindrome or not.",
    "12. Write a program to count the number of digits in a given number.",
    "13. Write a program to calculate the sum of digits of a number.",
    "14. Write a program to convert temperature from Celsius to Fahrenheit.",
    "15. Write a program to convert a binary number to decimal.",
    "16. Write a program to find the second largest number in an array.",
    "17. Write a program to sort an array using the Bubble Sort algorithm.",
    "18. Write a C program to implement the linear search algorithm.",
    "19. Write a C program to implement the binary search algorithm.",
    "20. Write a program to find the transpose of a matrix.",
    "21. Write a C program to multiply two matrices.",
    "22. Write a program to check if a given string is palindrome.",
    "23. Write a program to count the vowels and consonants in a string.",
    "24. Write a C program to copy one string to another using pointers.",
    "25. Write a C program to count the number of words in a string.",
    "26. Write a program to reverse a given string using recursion.",
    "27. Write a program to implement a simple calculator using switch-case.",
    "28. Write a program to demonstrate the use of pointers.",
    "29. Write a program to allocate memory dynamically using malloc().",
    "30. Write a C program to implement a stack using an array.",
    "31. Write a C program to implement a queue using an array.",
    "32. Write a C program to implement a linked list.",
    "33. Write a program to implement a doubly linked list.",
    "34. Write a program to implement a circular linked list.",
    "35. Write a C program to count the number of elements in a linked list.",
    "36. Write a program to reverse a linked list.",
    "37. Write a program to implement a stack using a linked list.",
    "38. Write a program to implement a queue using a linked list.",
    "39. Write a program to implement the selection sort algorithm.",
    "40. Write a program to implement the insertion sort algorithm.",
    "41. Write a program to implement the merge sort algorithm.",
    "42. Write a program to implement the quicksort algorithm.",
    "43. Write a program to implement the counting sort algorithm.",
    "44. Write a program to find the height of a binary tree.",
    "45. Write a program to check if a tree is a binary search tree (BST).",
    "46. Write a C program to traverse a binary tree using inorder traversal.",
    "47. Write a program to implement a priority queue.",
    "48. Write a program to find the shortest path using Dijkstra's algorithm.",
    "49. Write a program to find the minimum spanning tree using Kruskal's algorithm.",
    "50. Write a program to implement a hash table.",
    "51. Write a C program to check whether a graph is connected or not.",
    "52. Write a C program to implement Depth First Search (DFS).",
    "53. Write a C program to implement Breadth First Search (BFS).",
    "54. Write a program to implement a min-heap and max-heap.",
    "55. Write a program to implement a graph using an adjacency matrix.",
    "56. Write a program to count the number of leaf nodes in a binary tree.",
    "57. Write a program to check whether a given number is an Armstrong number.",
    "58. Write a program to implement a simple file handling operation.",
    "59. Write a program to copy content from one file to another.",
    "60. Write a program to reverse the contents of a file.",
    "61. Write a program to count the number of lines, words, and characters in a file.",
    "62. Write a program to demonstrate the use of function pointers.",
    "63. Write a C program to check if a given year is a leap year or not.",
    "64. Write a program to check whether a character is an uppercase or lowercase letter.",
    "65. Write a program to print a Pascal's triangle.",
    "66. Write a program to find the sum of an arithmetic progression series.",
    "67. Write a program to implement Tower of Hanoi using recursion.",
    "68. Write a program to implement a circular queue.",
    "69. Write a program to perform matrix addition and subtraction.",
    "70. Write a program to find the determinant of a matrix.",
    "71. Write a program to calculate compound interest.",
    "72. Write a program to generate random numbers.",
    "73. Write a program to implement a banking system with account management.",
    "74. Write a program to remove duplicate elements from an array.",
    "75. Write a program to rotate an array to the left by K positions.",
    "76. Write a program to rotate an array to the right by K positions.",
    "77. Write a program to check if two strings are anagrams.",
    "78. Write a program to generate all prime numbers up to N.",
    "79. Write a program to find the sum of all prime numbers in a range.",
    "80. Write a program to count the frequency of characters in a string.",
]

# Adding questions to PDF
pdf.set_font("Arial", size=12)
for question in questions:
    pdf.multi_cell(0, 7, question)
    pdf.ln(2)

# Save PDF file
pdf_filename = "/mnt/data/C_Practice_Questions.pdf"
pdf.output(pdf_filename)

# Provide download link
pdf_filename
