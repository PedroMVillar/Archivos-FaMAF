#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "queue.h"

struct s_queue
{
    struct s_node *first;
    struct s_node *last;
    unsigned int size;
};

struct s_node
{
    queue_elem elem;
    struct s_node *next;
};

static struct s_node * create_node(queue_elem e)
{
    struct s_node *new_node = malloc(sizeof(struct s_node));
    assert(new_node != NULL);
    new_node->elem = e;
    new_node->next = NULL;
    return new_node;
}

static struct s_node * destroy_node(struct s_node *node)
{
    node->next = NULL;
    free(node);
    node = NULL;
    return node;
}

static bool invrep(queue q)
{
    return q != NULL;
}

queue queue_empty(void)
{
    queue q = malloc(sizeof(struct s_queue));
    assert(q != NULL);
    q->first = NULL;
    q->last = NULL;
    q->size = 0;
    return q;
}

queue queue_enqueue(queue q, queue_elem e)
{
    assert(invrep(q));
    struct s_node *new_node = create_node(e);
    if (q->first == NULL)
    {
        q->first = new_node;
        q->last = new_node;
    }
    else
    {
        q->last->next = new_node;
        q->last = new_node;
    }
    q->size++;
    assert(invrep(q) && !queue_is_empty(q));
    return q;
}

bool queue_is_empty(queue q)
{
    assert(invrep(q));
    return q->first == NULL;
}

queue_elem queue_first(queue q)
{
    assert(invrep(q) && !queue_is_empty(q));
    return q->first->elem;
}

unsigned int queue_size(queue q)
{
    assert(invrep(q));
    return q->size;
}

queue queue_dequeue(queue q)
{
    assert(invrep(q) && !queue_is_empty(q));
    struct s_node *killme = q->first;
    q->first = q->first->next;
    if (q->first == NULL)
    {
        q->last = NULL;
    }
    killme = destroy_node(killme);
    q->size--;
    assert(invrep(q));
    return q;
}

void queue_dump(queue q, FILE *file)
{
    file = file == NULL ? stdout : file;
    struct s_node *node = q->first;
    fprintf(file, "[ ");
    while (node != NULL)
    {
        fprintf(file, "%d", node->elem);
        node = node->next;
        if (node != NULL)
        {
            fprintf(file, ", ");
        }
    }
    fprintf(file, "]\n");
}

queue queue_destroy(queue q)
{
    assert(invrep(q));
    struct s_node *node = q->first;
    while (node != NULL)
    {
        struct s_node *killme = node;
        node = node->next;
        killme = destroy_node(killme);
    }
    free(q);
    q = NULL;
    assert(q == NULL);
    return q;
}

queue queue_disscard(queue q, unsigned int n)
{
    assert(invrep(q) && n <= q->size);
    if (n == 0)
    {
        return queue_dequeue(q);
    }
    struct s_node *prev = NULL;
    struct s_node *actual = q->first;
    for (unsigned int i = 0; i < n; i++)
    {
        prev = actual;
        actual = actual->next;
    }
    if (actual == NULL)
    {
        q->size = n;
    }
    if (prev != NULL)
    {
        prev->next = actual->next;
    }

    destroy_node(actual);
    q->size--;

    return q;
    assert(invrep(q));
}