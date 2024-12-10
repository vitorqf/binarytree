# Binary Tree Implementation in C++

Este é um projeto de implementação de uma Árvore Binária em C++, com operações básicas de manipulação e visualização.

## Estruturas Principais

### TreeNode (Nó da Árvore)

```cpp
struct TreeNode {
    int data;           // Valor armazenado no nó
    TreeNode* left;     // Ponteiro para filho esquerdo
    TreeNode* right;    // Ponteiro para filho direito
};
```

### BinaryTree (Árvore Binária)

```cpp
struct BinaryTree {
    TreeNode* root;     // Ponteiro para a raiz da árvore
};
```

## Funções Principais

### 1. Inserção

- `insert(TreeNode** root, int data)`: Insere um novo valor na árvore
- Verifica duplicatas e as ignora
- Mantém a propriedade de árvore binária de busca

### 2. Remoção

- `remove(TreeNode* root, int data)`: Remove um valor da árvore
- Trata três casos:
  - Nó folha (sem filhos)
  - Nó com um filho
  - Nó com dois filhos

### 3. Busca

- `search(TreeNode* root, int data)`: Localiza um valor na árvore
- Retorna o nó encontrado ou o último nó visitado

### 4. Funções Auxiliares

- `minimum(TreeNode* root)`: Encontra o menor valor na árvore
- `maximum(TreeNode* root)`: Encontra o maior valor na árvore
- `nodes(TreeNode* root)`: Conta o número total de nós
- `leaves(TreeNode* root)`: Conta o número de folhas
- `print(TreeNode* root, int level)`: Imprime a estrutura da árvore

## Menu de Operações

O programa oferece um menu interativo com as seguintes opções:

1. Inserir um valor
2. Mostrar tamanho da árvore
3. Contar folhas
4. Imprimir árvore
5. Remover um valor
6. Sair

## Como Usar

1. Compile o código:

```bash
g++ main.cpp -o arvore
```

2. Execute o programa:

```bash
./arvore
```

3. A árvore é inicializada com os valores: 10, 5, 15, 3, 7, 12, 17

## Exemplo de Estrutura da Árvore

```
10
-5
--3
--7
-15
--12
--17
```

## Detalhes Técnicos

- Linguagem: C++
- Estrutura de dados: Árvore Binária de Busca
- Alocação de memória: Dinâmica
- Complexidade temporal média:
  - Inserção: O(log n)
  - Remoção: O(log n)
  - Busca: O(log n)

## Considerações

- A árvore não aceita valores duplicados
- A impressão usa traços (-) para indicar níveis
- A memória é liberada adequadamente na remoção de nós
