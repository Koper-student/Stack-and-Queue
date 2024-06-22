#define QUEUE_SIZE 5
int queue_table[QUEUE_SIZE] = {0 };
int queue_index = 0;



int isQueueEmpty()
{
    if (queue_index == 0) {
        return 1;
    } else {
        return 0;
    }
}

int isQueueFull()
{
    if (queue_index == QUEUE_SIZE) {
        return 1;
    } else {
        return 0;
    }
}

int Delete()
{
    if (!isQueueEmpty())
    {
        int first_element = queue_table[0];
        for (int i = 1; i < queue_index; i++) {
            queue_table[i-1] = queue_table[i];
        }
        queue_index--;
        return first_element;
    }

    return queue_table[0];
}

int First()
{
    if (!isQueueEmpty())
    {
        return queue_table[0];
    }
    return 0;
}

void Insert(int val)
{
    if (!isQueueFull())
    {
        queue_table[queue_index] = val;
        queue_index++;
    }
}