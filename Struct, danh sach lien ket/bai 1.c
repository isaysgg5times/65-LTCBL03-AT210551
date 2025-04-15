
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char TenHang[101];
    int DonGia;
    int SoLuong;
    int ThanhTien;
} HangHoa;


typedef struct node
{
    HangHoa data;
    struct node *next;
} Node;

typedef struct
{
    Node *first;
    Node *last;
} LinkedList;

LinkedList* createList()
{
    LinkedList *list= (LinkedList*)malloc(sizeof(LinkedList));
    list->first = NULL;
    list->last = NULL;
    return list;
}

Node* createNode(HangHoa data)
{
    Node *node=(Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void add1stNode(LinkedList *list, Node *node)
{
    list->first = node;
    list->last = node;
}

void addToLast(LinkedList *list, Node *node)
{
    list->last->next=node;
    list->last=node;
}

void inputHangHoa(HangHoa *Hang)
{
    printf("Ten Hang: ");
    fgets(Hang->TenHang, 101, stdin);
    Hang->TenHang[strcspn(Hang->TenHang, "\n")] = '\0';
    printf("Don gia: ");
    scanf("%d", &Hang->DonGia);
    getchar();
    printf("So luong: ");
    scanf("%d", &Hang->SoLuong);
    getchar();
    Hang->ThanhTien = Hang->DonGia * Hang->SoLuong;
}

void inputList(LinkedList *list,int n)
{
    int i;
    Node *node;
    HangHoa HangBuffer;
    printf("Hang 1:\n");
    inputHangHoa(&HangBuffer);
    node = createNode(HangBuffer);
    add1stNode(list, node);
    for (i=1; i<n; i++)
    {
        printf("Hang %d:\n", i+1);
        inputHangHoa(&HangBuffer);
        node = createNode(HangBuffer);
        addToLast(list, node);
    }
}

Node* split(Node *head) {
    Node* fast = head;
    Node* slow = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        if (fast != NULL) {
            slow = slow->next;
        }
    }
    Node* temp = slow->next;
    slow->next = NULL;
    return temp;
}

Node* merge(Node* first, Node* second)
{
    if (first == NULL) return second;
    if (second == NULL) return first;
    if (first->data.TenHang[0] < second->data.TenHang[0]) {
        first->next = merge(first->next, second);
        return first;
    }
    else {
        second->next = merge(first, second->next);
        return second;
    }
}

Node* MergeSort(Node *head)
{
    if (head==NULL || head->next == NULL)
    {
        return head;
    }
    Node* second = split(head);

    head=MergeSort(head);
    second=MergeSort(second);

    return merge(head, second);
}

void printList(LinkedList *list)
{
    int Tong=0;
    printf("%5s %20s %10s %10s %10s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
    Node *node = list->first;
    int i=1;
    while (node != NULL)
    {
        printf("%5d %20s %10d %10d %10d\n", i, node->data.TenHang, node->data.DonGia, node->data.SoLuong, node->data.ThanhTien);
        i++;
        Tong += node->data.ThanhTien;
        node = node->next;
    }
    printf("%48s %10d", "Tong tien:", Tong);

}

int main()
{
    int n;
    LinkedList *list = createList();
    printf("So hang can nhap: ");
    scanf("%d", &n);
    getchar();
    inputList(list, n);
    printList(list);

    printf("Danh sach sau khi sap xep: ");
    list->first = MergeSort(list->first);
    printList(list);
    return 0;
}
