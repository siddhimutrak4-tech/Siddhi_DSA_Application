# Product List Management System Using Singly Linked List

## 1. Problem Statement

To develop a Product List Management System using a singly linked list to store product details and perform insertion, deletion, searching, and display operations efficiently.

## 2. Objectives

- To store product details using a singly linked list.
- To insert new product records into the list.
- To search for a product using its ID.
- To delete a product from the list.
- To display all product details.

## 3. Algorithm

1. Start.
2. Initialize the head pointer to NULL.
3. Display the menu: Insert Product, Display Products, Search Product, Delete Product, and Exit.
4. Accept the user's choice.
5. Perform the selected operation:
   - **Insert:** Accept product ID, name, and price. Create a new node and add it to the end of the linked list.
   - **Display:** Traverse the linked list and display all product details.
   - **Search:** Accept a product ID and search for the product in the linked list.
   - **Delete:** Accept a product ID, find the product, and delete its node. If it is not found, display an appropriate message.
   - **Exit:** Terminate the program.
6. Repeat the menu until the user selects Exit.
7. Stop.

## 4. Flowchart

```text
             START
               |
               v
     Initialize Head = NULL
               |
               v
       Display Main Menu
               |
               v
      Accept User's Choice
               |
               v
       Select an Operation
         /    |    |    \
        v     v    v     v
     Insert Display Search Delete
        |     |    |      |
        v     v    v      v
     Add New Show  Find  Remove
      Product List Product Product
        |     |    |      |
        +-----+----+------+
               |
               v
       Continue or Exit?
          /          \
       Continue
## 5. Conclusion
```
The Product List Management System was designed using a singly linked list to manage product details. It supports insertion, deletion, searching, and display operations and helps demonstrate the use of linked lists and dynamic memory allocation in C++.
