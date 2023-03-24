/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int count;

	for (count = 0; count < 8; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}

