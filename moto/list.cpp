class List {
    struct Node {
        int value;//szablony
        Node *pNext;
    };

    Node *pHead;
public:
    List();
    List(int const arr[], int size);
    ~List();
    void insert(int value);
    void reverse();
    void toString();
    bool contains(int v);
    // ... konstr kop, wirtualny desruktor, operatory,
};
