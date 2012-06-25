#include "../common.h"


#define LEN 10

void get_data(int *data, int *data_sorted, int *index)
{
    int i;
    prompt("Please enter the prices from the last %d days:\n", LEN);
    for (i=0; i<LEN; i++)
    {
        scanf("%d",&data[i]);
        flush();
        data_sorted[i] = data[i];
        index[i] = i +1;
    }
}

int index_max(int array[], int len){ //Return the index of the largest element
	int max, index_max, i;
	max = array[0];
	index_max = 0;
	for (i=0; i < len; i++) if (max<array[i]) {
		max = array[i];
		index_max = i;
	}
	return index_max;
}

void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int *data_sorted, int *index)
{
	int i,j;
	for (i=0; i<LEN; i++)
	{
		/*
		Get the largest element and put it first. Move one position up with each iteration.
		A minor variation of the insertion sort algorithm.
		*/
		index[i] = index_max(data_sorted+i, LEN-i) + i;
		swap(&data_sorted[i], &data_sorted[index[i]]);
	}
}

int main()
{
    int data[LEN];
    int data_sorted[LEN];
    int index[LEN];
    int choice;


    //Get data
    prompt("We need to know your phone card bills to start running.\n");
    get_data(data, data_sorted, index);

    while (1)
    {
        clrscr();

        printf("Please choose a command then press ENTER:\n");
        printf(
      "a. Enter prices again\n"
      "b. Get the 2 days with highest prices\n"
      "c. Get the price of any random day\n"
      "d. Exit\n");
        choice = getchar();
        flush();
        switch (choice)
        {
        case 'a': //Re-enter values

            get_data(data, data_sorted, index);
            break;
            
        case 'b': //2 days with highest prices
            sort(data_sorted, index);
            printf("The 2 days with the highest prices are day %d (%d) and day %d (%d).\n",
				index[0]+1, data_sorted[0], index[1]+1, data_sorted[1]);
            _pause();
            break;
            
        case 'c': //Arbitary day
            prompt("Of which day do you want to get the price? ");
            scanf("%d", &choice); //recycling
            flush();

            if ( choice < 1 || choice > LEN)
            {
                prompt("It must be a day from 1 to %d.\n",LEN);
                _pause();
                break;
            }
            printf("The price from that day is %d\n", data[choice -1]);
            _pause();
            break;
            
        case 'd': //Quit
            exit(0);
            
        default: //Unanticipated choices
            printf("Please choose one of a, b, c or d.\n");
            _pause();
        }
    }
    return 0;
}
