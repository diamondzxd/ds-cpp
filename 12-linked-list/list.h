class Node
{
private:
    int data;
    Node *next;

public:
    Node(int d) : data(d), next(NULL) {}
};

class List
{
    Node *head;
    Node *tail;

public:
    List() : head(NULL), tail(NULL) {}

    void push_front(int data)
    {
        }
}