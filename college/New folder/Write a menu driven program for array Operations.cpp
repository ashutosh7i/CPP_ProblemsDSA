// Write a menu driven program for array Operations:  
// a) Insertion at first, last and particular position 
// b) Deletion from first, last and particular position 
// c) traversing
// with its algorithm and complexity


int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int choice;
    do
    {
        cout << "1. Insertion at first" << endl;
        cout << "2. Insertion at last" << endl;
        cout << "3. Insertion at particular position" << endl;
        cout << "4. Deletion from first" << endl;
        cout << "5. Deletion from last" << endl;
        cout << "6. Deletion from particular position" << endl;
        cout << "7. Traversing" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            // Insertion at first
            cout << "Enter the element to be inserted at first: ";
            int x;
            cin >> x;
            for (int i = n - 1; i >= 0; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[0] = x;
            n++;
            cout << "The array after insertion at first is: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 2:
            // Insertion at last
            cout << "Enter the element to be inserted at last: ";
            cin >> x;
            arr[n] = x;
            n++;
            cout << "The array after insertion at last is: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
         case 3:
        // Insertion at particular position
            cout << "Enter the element to be inserted at particular position: ";
            cin >> x;
            int pos;
            cout << "Enter the position: ";
            cin >> pos;
            for (int i = n - 1; i >= pos - 1; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[pos - 1] = x;
            n++;
            cout << "The array after insertion at particular position is: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 4:
            // Deletion from first
            for (int i = 0; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            n--;
            cout << "The array after deletion from first is: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 5:
            // Deletion from last
            n--;
            cout << "The array after deletion from last is: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 6:
            // Deletion from particular position
            cout << "Enter the position: ";
            cin >> pos;
            for (int i = pos - 1; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            n--;
            cout << "The array after deletion from particular position is: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 7:
            // Traversing
            cout << "The array is: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}

// Output:

// Enter the size of array: 8
// Enter the elements of array: 1 2 3 4 5 6 7 8
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 1
// Enter the element to be inserted at first: 0
// The array after insertion at first is: 0 1 2 3 4 5 6 7 8 
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 2
// Enter the element to be inserted at last: 9
// The array after insertion at last is: 0 1 2 3 4 5 6 7 8 9 
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 3
// Enter the element to be inserted at particular position: 10
// Enter the position: 5
// The array after insertion at particular position is: 0 1 2 3 10 4 5 6 7 8 9 
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 4
// The array after deletion from first is: 1 2 3 10 4 5 6 7 8 9 
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 5
// The array after deletion from last is: 1 2 3 10 4 5 6 7 8 
// 1. Insert

// =======
// Enter the size of array: 8
// Enter the elements of array: 1 2 3 4 5 6 7 8
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 1
// Enter the element to be inserted at first: 10
// The array after insertion at first is: 10 1 2 3 4 5 6 7 8
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 2
// Enter the element to be inserted at last: 20
// The array after insertion at last is: 10 1 2 3 4 5 6 7 8 20
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 3
// Enter the element to be inserted at particular position: 30
// Enter the position: 5
// The array after insertion at particular position is: 10 1 2 3 30 4 5 6 7 8 20
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 4
// The array after deletion from first is: 1 2 3 30 4 5 6 7 8 20
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 5
// The array after deletion from last is: 1 2 3 30 4 5 6 7 8
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 6
// Enter the position: 5
// The array after deletion from particular position is: 1 2 3 30 5 6 7 8
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 7
// The array is: 1 2 3 30 5 6 7 8
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 0

// Enter the size of array: 10
// Enter the elements of array: 1 2 3 4 5 6 7 8 9 10
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 1
// Enter the element to be inserted at first: 11
// The array after insertion at first is: 11 1 2 3 4 5 6 7 8 9 10
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 2
// Enter the element to be inserted at last: 12
// The array after insertion at last is: 11 1 2 3 4 5 6 7 8 9 10 12
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 3
// Enter the element to be inserted at particular position: 13
// Enter the position: 5
// The array after insertion at particular position is: 11 1 2 3 13 4 5 6 7 8 9 10 12
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 4
// The array after deletion from first is: 1 2 3 13 4 5 6 7 8 9 10 12
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 5
// The array after deletion from last is: 1 2 3 13 4 5 6 7 8 9 10
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 6
// Enter the position: 5
// The array after deletion from particular position is: 1 2 3 13 5 6 7 8 9 10
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 7
// The array is: 1 2 3 13 5 6 7 8 9 10
// 1. Insertion at first
// 2. Insertion at last
// 3. Insertion at particular position
// 4. Deletion from first
// 5. Deletion from last
// 6. Deletion from particular position
// 7. Traversing
// Enter your choice: 0

//Time Complexity: O(n)
//Space Complexity: O(1)