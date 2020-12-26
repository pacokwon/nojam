#include <stdio.h>

struct Tree {
    char value;
    int left;
    int right;
};

int N;
struct Tree nodes[30];

void preorder(int nodeIndex) {
    printf("%c", nodes[nodeIndex].value);

    if (nodes[nodeIndex].left != -1)
        preorder(nodes[nodeIndex].left);

    if (nodes[nodeIndex].right != -1)
        preorder(nodes[nodeIndex].right);
}

void inorder(int nodeIndex) {
    if (nodes[nodeIndex].left != -1)
        inorder(nodes[nodeIndex].left);

    printf("%c", nodes[nodeIndex].value);

    if (nodes[nodeIndex].right != -1)
        inorder(nodes[nodeIndex].right);
}

void postorder(int nodeIndex) {
    if (nodes[nodeIndex].left != -1)
        postorder(nodes[nodeIndex].left);

    if (nodes[nodeIndex].right != -1)
        postorder(nodes[nodeIndex].right);

    printf("%c", nodes[nodeIndex].value);
}

int main(void) {
    scanf("%d", &N);

    char left[3], right[3], value[3];
    for (int i = 0; i < N; i++) {
        scanf("%s%s%s", value, left, right);

        int index = value[0] - 'A';
        nodes[index].value = value[0];
        nodes[index].left = left[0] == '.' ? -1 : (left[0] - 'A');
        nodes[index].right = right[0] == '.' ? -1 : (right[0] - 'A');
    }

    preorder(0);
    printf("\n");
    inorder(0);
    printf("\n");
    postorder(0);
    printf("\n");

    return 0;
}
