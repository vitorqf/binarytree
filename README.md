# Árvore Binária em C++

## Introdução

Este projeto implementa uma **Árvore Binária de Busca** (Binary Search Tree - BST) em C++. A estrutura de dados árvore binária é fundamental em ciência da computação, oferecendo operações eficientes de inserção, busca e remoção de elementos.

## Estrutura de Dados

### `TreeNode`

Representa um nó da árvore binária.

- **Atributos:**
  - `int data`: Armazena o valor do nó.
  - `TreeNode* left`: Ponteiro para o filho à esquerda.
  - `TreeNode* right`: Ponteiro para o filho à direita.

### `BinaryTree`

Gerencia a raiz da árvore binária.

- **Atributo:**
  - `TreeNode* root`: Ponteiro para a raiz da árvore.

## Funcionalidades

### Inserção (`insert`)

Adiciona um novo nó à árvore. Se o valor já existir, a inserção é ignorada para manter a unicidade dos elementos.

### Remoção (`remove`)

Remove um nó da árvore. Existem três casos a serem considerados:

1. Nó sem filhos (folha).
2. Nó com um único filho.
3. Nó com dois filhos: substitui pelo menor nó da subárvore direita.

### Busca (`search`)

Localiza um nó na árvore com base no valor fornecido. Retorna o nó encontrado ou o nó mais próximo se o valor não existir.

### Percursos

- **Inorder (`inorder`)**: Percorre a árvore em ordem crescente.
- **Preorder (`preorder`)**: Visita a raiz antes dos filhos.
- **Postorder (`postorder`)**: Visita a raiz após os filhos.
- **Levelorder (`levelorder`)**: Percorre a árvore nível a nível usando uma fila.

### Contagens

- **Número de Nós (`nodes`)**: Retorna a quantidade total de nós na árvore.
- **Número de Folhas (`leaves`)**: Retorna a quantidade de folhas (nós sem filhos).

### Impressão (`print`)

Exibe a estrutura da árvore de forma hierárquica, representando os níveis com hífens.

### Geração de Árvore (`generate`)

Preenche a árvore com um conjunto pré-definido de valores para facilitar testes e demonstrações.

## Interface de Usuário

A função `menu` oferece um menu interativo que permite ao usuário realizar as seguintes operações:

1. **Inserir**: Adicionar um novo valor à árvore.
2. **Tamanho**: Exibir o número de nós na árvore.
3. **Contagem de Folhas**: Mostrar quantas folhas existem na árvore.
4. **Imprimir**: Exibir a estrutura da árvore.
5. **Remover**: Eliminar um valor específico da árvore.
6. **Gerar**: Popular a árvore com valores padrão.
7. **Inorder**: Executar o percurso inorder.
8. **Preorder**: Executar o percurso preorder.
9. **Postorder**: Executar o percurso postorder.
10. **Levelorder**: Executar o percurso levelorder.

- **-1. Sair**: Encerrar o programa.

## Considerações Finais

Esta implementação oferece uma base sólida para entender e manipular árvores binárias de busca em C++. É uma excelente ferramenta para aprendizado e pode ser expandida com funcionalidades adicionais, como balanceamento da árvore ou representação visual mais avançada.

## Como Executar

1. **Compilar**:
   ```bash
   g++ -o binarytree main.cpp
   ```
