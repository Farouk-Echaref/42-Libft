
int main(void)
{
	int *ptr;
	int *mine;

	ptr = (int *)calloc(4,sizeof(int));
	mine = (int *)ft_calloc(4,sizeof(int));

	for(int i = -1; i < 5;i++)
		printf("%d ",ptr[i]);
	printf("\n");
	for (int i = -1; i < 5;i++)
		printf("%d ",mine[i]);
	printf("\n");
	return (-1);
}