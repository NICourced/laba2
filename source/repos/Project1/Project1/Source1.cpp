#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Enter dostoinstvo then mastt\n");
	int x, y;
	scanf_s("%d %d", &x, &y);
	switch (x)
	{
	case 1: printf("Edinica ");
		break;
	case 2: printf("Dvoika ");
		break;
	case 3: printf("Troika ");
		break;
	case 4: printf("Chetverka ");
		break;
	case 5: printf("Pytorka ");
		break;
	case 6: printf("Shesterka ");
		break;
	case 7: printf("Semerka ");
		break;
	case 8: printf("Vosmerka ");
		break;
	case 9: printf("Devatka ");
		break;
	case 10: printf("Desatka ");
		break;
	case 11: printf("Valet ");
		break;
	case 12: printf("Dama ");
		break;
	case 13: printf("Korol ");
		break;
	case 14: printf("Tuz ");
		break;
	default: printf("From 1 to 14 plz ");
	}
	switch (y)
	{
	case 1: printf("Bubi");
		break;
	case 2: printf("Cherv");
		break;
	case 3: printf("Treff");
		break;
	case 4: printf("Pik");
		break;
	default: printf("From 1 to 4 plz");
	}
	getchar();
	return 0;
}