#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Ho_ten[101];
    int Tuoi;
    float Diem_TB;
} Sinhvien;

typedef struct Node {
    Sinhvien data;
    struct Node *next;
} Node;

typedef struct {
    Node *first;
    Node *last;
} Linkedlist;

Node *prevnode;

Linkedlist* create_linked_list() {
    Linkedlist *list = (Linkedlist*)malloc(sizeof(Linkedlist));
    list->first = NULL;
    list->last = NULL;
    return list;
}

Node* create_node(Sinhvien data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void add1stnode(Linkedlist *list, Node *node) {
    list->first = node;
    list->last = node;
}

void addtolast(Linkedlist *list, Node *node) {
    list->last->next = node;
    list->last = node;
}

void input(Sinhvien *sv) {
    printf("Ho va ten: ");
    fgets(sv->Ho_ten, 101, stdin);
    sv->Ho_ten[strcspn(sv->Ho_ten, "\n")] = '\0';

    printf("Tuoi: ");
    scanf("%d", &sv->Tuoi);
    getchar();

    printf("Diem TB: ");
    scanf("%f", &sv->Diem_TB);
    getchar();
}

Node* search(Linkedlist *list, char *ten) {
    Node *node = list->first;
    prevnode = NULL;
    while (node != NULL) {
        if (strcmp(node->data.Ho_ten, ten) == 0) {
            return node;
        }
        prevnode = node;
        node = node->next;
    }
    return NULL;
}

void chen(Linkedlist *list, char *ten) {
    Node *foundnode = search(list, ten);
    if (foundnode == NULL) {
        printf("Khong ton tai sinh vien\n");
    } else {
        printf("Thong tin sinh vien moi:\n");
        Sinhvien sv;
        input(&sv);
        Node *svmoi = create_node(sv);
        svmoi->next = foundnode;

        if (prevnode != NULL) {
            prevnode->next = svmoi;
        } else {
            list->first = svmoi;
        }
    }
}

void loaibo(Linkedlist *list, char *ten) {
    Node *found = search(list, ten);
    if (found == NULL) {
        printf("Khong ton tai sinh vien\n");
    } else {
        if (prevnode == NULL) {
            list->first = found->next;
        } else {
            prevnode->next = found->next;
        }
        if (found == list->last) {
            list->last = prevnode;
        }
        free(found);
    }
}

void print(Linkedlist *list) {
    printf("%5s %20s %5s %10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    if (list->first == NULL) {
        printf("Danh sach rong\n");
        return;
    }
    Node *node = list->first;
    int i = 1;
    while (node != NULL) {
        printf("%5d %20s %5d %10.2f\n", i, node->data.Ho_ten, node->data.Tuoi, node->data.Diem_TB);
        i++;
        node = node->next;
    }
}

void inputList(Linkedlist *list, int n) {
    Sinhvien sv;
    printf("Sinh vien 1:\n");
    input(&sv);
    Node *node = create_node(sv);
    add1stnode(list, node);
    for (int i = 1; i < n; i++) {
        printf("Sinh vien %d:\n", i + 1);
        input(&sv);
        node = create_node(sv);
        addtolast(list, node);
    }
}

void freeList(Linkedlist *list) {
    Node *current = list->first;
    Node *nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    free(list);
}

int main() {
    Linkedlist *list = create_linked_list();
    char key[101];
    int choice;

    while (1) {
        printf("\nChon hanh dong:\n");
        printf("1. Tao danh sach moi\n");
        printf("2. In danh sach\n");
        printf("3. Chen sinh vien\n");
        printf("4. Bo sinh vien\n");
        printf("0. Thoat chuong trinh\n");
        printf("Lua chon: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Nhap so sinh vien: ");
                scanf("%d", &choice);
                getchar();
                inputList(list, choice);
                break;
            case 2:
                print(list);
                break;
            case 3:
                printf("Nhap ten sinh vien muon chen truoc: ");
                fgets(key, 101, stdin);
                key[strcspn(key, "\n")] = '\0';
                chen(list, key);
                print(list);
                break;
            case 4:
                printf("Nhap ten sinh vien muon loai bo: ");
                fgets(key, 101, stdin);
                key[strcspn(key, "\n")] = '\0';
                loaibo(list, key);
                print(list);
                break;
            case 0:
                freeList(list);
                return 0;
            default:
                printf("Khong hop le\n");
        }
    }
}
