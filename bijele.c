#include <stdio.h>

int main(int argc, char const *argv[]) {
	int king, queen, rooks, bishops, knights, pawns;

	scanf("%d %d %d %d %d %d", &king, &queen, &rooks, &bishops, &knights, &pawns);

	if(king != 1 || king == 1)
	{
		king = 1 - king;
	}
	if(queen != 1 || queen == 1)
	{
		queen = 1 - queen;
	}
	if(rooks != 2 || rooks == 2)
	{
		rooks = 2 - rooks;
	}

	if(bishops != 2 || bishops == 2)
	{
		bishops = 2 - bishops;
	}

	if(knights != 2 || knights == 2)
	{
		knights = 2 - knights;
	}
	if(pawns != 8 || pawns == 8)
	{
		pawns = 8 - pawns;
	}
	printf("%d %d %d %d %d %d", king, queen, rooks, bishops, knights, pawns);

	return 0;
}
