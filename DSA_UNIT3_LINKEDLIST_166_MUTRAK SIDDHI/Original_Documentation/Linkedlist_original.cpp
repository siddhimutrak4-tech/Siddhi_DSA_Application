#include <iostream>
using namespace std;

struct Product
{
    int id;
    string name;
    float price;
    Product* next;
};

Product* head = NULL;

void insertProduct()
{
    Product* newProduct = new Product;

    cout << "Enter Product ID: ";
    cin >> newProduct->id;

    cout << "Enter Product Name: ";
    cin >> newProduct->name;

    cout << "Enter Product Price: ";
    cin >> newProduct->price;

    newProduct->next = NULL;

    if (head == NULL)
        head = newProduct;
    else
    {
        Product* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newProduct;
    }

    cout << "Product inserted successfully!\n";
}

void displayProducts()
{
    Product* temp = head;

    if (temp == NULL)
    {
        cout << "No products available.\n";
        return;
    }

    cout << "\nProduct List:\n";

    while (temp != NULL)
    {
        cout << "ID: " << temp->id
             << ", Name: " << temp->name
             << ", Price: " << temp->price << endl;

        temp = temp->next;
    }
}

void searchProduct()
{
    int id;
    cout << "Enter Product ID to search: ";
    cin >> id;

    Product* temp = head;

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            cout << "Product Found!\n";
            cout << "Name: " << temp->name << endl;
            cout << "Price: " << temp->price << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Product not found.\n";
}

void deleteProduct()
{
    int id;
    cout << "Enter Product ID to delete: ";
    cin >> id;

    Product* temp = head;
    Product* prev = NULL;

    while (temp != NULL && temp->id != id)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Product not found.\n";
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    delete temp;

    cout << "Product deleted successfully!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Product List Management ---\n";
        cout << "1. Insert Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Delete Product\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                insertProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                deleteProduct();
                break;

            case 5:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
