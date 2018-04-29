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

BinSearchTree :: BinSearchTree(){
    pRoot = nullptr;
}


void BinSearchTree::insert(int value){

    BSTNode *newV = value;
    newV->pLeft = nullptr;
    newV->pRight = nullptr;

    if(*pRoot->value == nullptr)
    {
        pRoot = newV;
    }
    else{
        if(value < *pRoot->value){
           if(pRoot->pLeft){

           }
           else{
               pRoot->pLeft = newV;
           }
        }
        else {
            pRoot->pRight->value = value;
        }
    }

}
