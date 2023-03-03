/**
* reverse_array - does some thing
* @a: sourc
* @n: n
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	inr mid = n / 2;
	for (i = 0; i < mid; i++)
	{
		int tmp;

		tmp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = tmp;
	}
}
