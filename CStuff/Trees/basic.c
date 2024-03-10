#include <stdio.h>
#include <stdlib.h>

struct node *root = NULL;

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

void addNode()
{
    int input;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        perror("Node creation");
        exit(0);
    }
    else
    {
        printf("Enter a number: ");
        scanf("%d", &input);
        ptr->data = input;

        if (root == NULL)
        {
            ptr->left = NULL;
            ptr->right = NULL;
            root = ptr;
        }
    }
}

int menu()
{
    int userInput = 0;
    printf("1 = Add Node\n");
    printf("2 = Print tree\n");
    printf("3 = Delete Node\n");
    printf("0 = EXIT");
    scanf("%d", &userInput);
    if (userInput != 1 || userInput != 2 || userInput != 3 || userInput != 0)
    {
        return menu();
    }
    else
    {
        return userInput;
    }
}

main()
{
    int user_Input = 1;
    while (user_Input)
    {
        user_Input = menu();
        switch (user_Input)
        {
        case 1:
            addNode();
            break;
        case 2:
            printTree();
            break;
        case 3:
            delNode();
            break;
        default:
            break;
        }
    }

    return EXIT_SUCCESS;
}