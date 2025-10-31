#include <stdio.h>
#include <stdlib.h> // Para malloc e free

// --- Definição da Estrutura ---
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// --- Protótipos das Funções ---
Node* createNode(int data);
Node* insert(Node* root, int data);
void inorderTraversal(Node* root);
void freeTree(Node* root);

// --- Função Principal ---
int main() {
    // A árvore começa vazia. 'root' é o ponteiro para o nó raiz.
    Node* root = NULL;

    printf("Inserindo valores na Arvore Binaria de Busca...\n");

    // A mágica de C: 'root' é atualizado a cada inserção.
    // A primeira inserção (50) faz 'root' deixar de ser NULL.
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);
    root = insert(root, 90);

    /*
     A árvore resultante será:
           50
         /    \
        30     70
       / \    / \
      20 40  60  80
    */

    printf("Percurso Em-Ordem (deve imprimir em ordem crescente):\n");
    inorderTraversal(root); // Saída: 20 30 40 50 60 70 80
    printf("\n");

    // Sempre libere a memória ao final!
    printf("Liberando memoria da arvore...\n");
    freeTree(root);
    root = NULL; // Boa prática para evitar ponteiros "soltos"

    return 0;
}

// --- Implementação das Funções ---

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Função recursiva para inserir um valor na BST
Node* insert(Node* root, int data) {
    // 1. Caso Base: Árvore vazia, cria o nó aqui.
    if (root == NULL) {
        return createNode(data);
    }

    // 2. Caso Recursivo: Decide para onde ir
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    
    // 3. Retorna a raiz da subárvore
    return root;
}

// Percurso Em-Ordem (Esquerda -> Raiz -> Direita)
void inorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Libera a memória da árvore (Pós-Ordem)
void freeTree(Node* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}
