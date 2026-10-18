#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int id;
    string name;
    float price;
    Product *next;
    Product *prev;
};

Product *dHead = NULL;
Product *cHead = NULL;

// Insert into Doubly Linked List
void insertDoubly(int id, string name, float price)
{
    Product *n = new Product{id, name, price, NULL, NULL};

    if (dHead == NULL)
    {
        dHead = n;
        return;
    }

    Product *temp = dHead;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = n;
    n->prev = temp;
}

// Insert into Circular Linked List
void insertCircular(int id, string name, float price)
{
    Product *n = new Product{id, name, price, NULL, NULL};

    if (cHead == NULL)
    {
        cHead = n;
        n->next = cHead;
        return;
    }

    Product *temp = cHead;

    while (temp->next != cHead)
        temp = temp->next;

    temp->next = n;
    n->next = cHead;
}

// Display Doubly Linked List
void displayDoubly()
{
    Product *temp = dHead;

    cout << "\nDoubly Linked List:\n";

    if (temp == NULL)
    {
        cout << "No products available.\n";
        return;
    }

    while (temp != NULL)
    {
        cout << temp->id << " "
             << temp->name << " "
             << temp->price << endl;

        temp = temp->next;
    }
}

// Display Circular Linked List
void displayCircular()
{
    cout << "\nCircular Linked List:\n";

    if (cHead == NULL)
    {
        cout << "No products available.\n";
        return;
    }

    Product *temp = cHead;

    do
    {
        cout << temp->id << " "
             << temp->name << " "
             << temp->price << endl;

        temp = temp->next;
    }
    while (temp != cHead);
}

// Search in Doubly Linked List
void searchDoubly(int id)
{
    Product *temp = dHead;

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            cout << "Product found: " << temp->name
                 << ", Price: " << temp->price << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Product not found.\n";
}

// Search in Circular Linked List
void searchCircular(int id)
{
    if (cHead == NULL)
    {
        cout << "Product not found.\n";
        return;
    }

    Product *temp = cHead;

    do
    {
        if (temp->id == id)
        {
            cout << "Product found: " << temp->name
                 << ", Price: " << temp->price << endl;
            return;
        }

        temp = temp->next;
    }
    while (temp != cHead);

    cout << "Product not found.\n";
}

// Delete from Doubly Linked List
void deleteDoubly(int id)
{
    Product *temp = dHead;

    while (temp != NULL && temp->id != id)
        temp = temp->next;

    if (temp == NULL)
    {
        cout << "Product not found.\n";
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        dHead = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;

    cout << "Product deleted from Doubly Linked List.\n";
}

// Delete from Circular Linked List
void deleteCircular(int id)
{
    if (cHead == NULL)
    {
        cout << "Product list is empty.\n";
        return;
    }

    Product *temp = cHead;
    Product *prev = NULL;

    do
    {
        if (temp->id == id)
        {
            if (temp == cHead && temp->next == cHead)
            {
                cHead = NULL;
            }
            else
            {
                if (prev == NULL)
                {
                    Product *last = cHead;

                    while (last->next != cHead)
                        last = last->next;

                    cHead = cHead->next;
                    last->next = cHead;
                }
                else
                {
                    prev->next = temp->next;
                }
            }

            delete temp;

            cout << "Product deleted from Circular Linked List.\n";
            return;
        }

        prev = temp;
        temp = temp->next;
    }
    while (temp != cHead);

    cout << "Product not found.\n";
}

int main()
{
    int choice, id;
    string name;
    float price;

    do
    {
        cout << "\n--- Product List Management ---\n";
        cout << "1. Insert Product\n";
        cout << "2. Display Doubly Linked List\n";
        cout << "3. Display Circular Linked List\n";
        cout << "4. Search Product\n";
        cout << "5. Delete Product\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter Product ID: ";
                cin >> id;

                cout << "Enter Product Name: ";
                cin >> name;

                cout << "Enter Product Price: ";
                cin >> price;

                insertDoubly(id, name, price);
                insertCircular(id, name, price);

                cout << "Product inserted into both lists.\n";
                break;

            case 2:
                displayDoubly();
                break;

            case 3:
                displayCircular();
                break;

            case 4:
                cout << "Enter Product ID to search: ";
                cin >> id;

                cout << "Search in Doubly Linked List:\n";
                searchDoubly(id);

                cout << "Search in Circular Linked List:\n";
                searchCircular(id);
                break;

            case 5:
                cout << "Enter Product ID to delete: ";
                cin >> id;

                deleteDoubly(id);
                deleteCircular(id);
                break;

            case 6:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    }
    while (choice != 6);

    return 0;
}
