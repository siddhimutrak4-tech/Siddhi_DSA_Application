# Product List Management System
## Using Doubly and Circular Linked Lists

## 1. Problem Statement

To develop a Product List Management System using Doubly Linked List and Circular Linked List to store and manage product details such as product ID, product name, and price. The system supports insertion, deletion, searching, and displaying of product records.

## 2. Objectives

1. To store product details such as product ID, name, and price using linked lists.
2. To implement Doubly Linked List and Circular Linked List.
3. To perform insertion and deletion of product records.
4. To search for products using their ID.
5. To display all product details efficiently.

## 3. Algorithm

1. Start.
2. Create a product node containing ID, name, price, next pointer, and previous pointer.
3. Initialize both linked lists to NULL.
4. Display the menu of operations.
5. Insert product details into both linked lists.
6. Display products from the selected linked list.
7. Search for a product using its ID.
8. Delete a product from both linked lists using its ID.
9. Repeat the operations until the user selects Exit.
10. Stop.

## 4. Flowchart

```text
             START
               |
               v
       Initialize Both Lists
               |
               v
        Display Main Menu
               |
               v
       Select an Operation
               |
               v
       +-------------------+
       |   Select Option   |
       +-------------------+
          /    |    |    \
         /     |    |     \
        v      v    v      v
     Insert  Display Search Delete
        |      |    |       |
        v      v    v       v
     Add to  Show  Find   Remove
     Lists  Products ID   Product
        |      |    |       |
        +------+------+----+
               |
               v
       Continue Operations?
           /         \
         Yes          No
          |            |
          v            v
      Main Menu        STOP

## 5. Conclusion
```
The Product List Management System demonstrates how Doubly Linked Lists and Circular Linked Lists can be used to store and manage product records efficiently. The system supports insertion, deletion, searching, and displaying product details. This project helps in understanding linked list operations, dynamic memory management, and the practical application of data structures in product management systems.
