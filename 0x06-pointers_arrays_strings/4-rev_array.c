/**
* reverse_array - does some thing
* @a: sourc
* @n: n
* Return: @dest
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n/2; i++)
	{
		int tmp;
		tmp = a[i];
		a[i] = a[n-i];
		a[n-i] = tmp;
	}
}
