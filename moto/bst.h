#ifndef BST_H
#define BST_H
class BinSearchTree {
    struct BSTNode
    {
        int value;
        BSTNode *pLeft;
        BSTNode *pRight;
    };

    BSTNode *pRoot;
public:
    BinSearchTree();
    BinSearchTree(int const arr[], int size);
    ~BinSearchTree();
    void insert(int value);
    void toString();
    bool contains();
    void mirror();//odwracamy drzewo, Lewa zamieniona z Prawa, przy pomocy rekursji
    // ... liczba elementow, glebokosc lewego i prawego poddrzewa, budowanie drzewa z tablicy, drzewo do listy - sposob przechodzenia drzewa (in,pre,post)
};
#endif // BST_H
