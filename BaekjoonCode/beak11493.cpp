#include <stdio.h>
#include <algorithm>

#define INF 10000;

int board[500][500];
int temp[500][500];
int edgeX;
int edgeY;
int start[500];
int last[500];
int startlist[500];
int lastlist[500];
int routelist[250000];
int finalresult;
int resultlist[500];

int maxRoute(int route[], int routesize, int blackcoinnum) {

	return finalresult;
}

int main() {
	int casenum, vertexnum, edgenum, i, j, k, l;
	scanf("%d", &casenum);
	for (i = 0; i < 500; i++) {
		for (j = 0; j < 500; j++) {
			if (i == j) {
				board[i][j] = 0;
			}
			else {
				board[i][j] = INF;
			}
		}
	}
	for (j = 0; j < casenum; j++) {
		int blackcoinnum = 0;
		int routelistnum = 0;
		int result = 0;
		scanf("%d %d", &vertexnum, &edgenum);
		for (i = 0; i < edgenum; i++) {
			scanf("%d %d", &edgeX, &edgeY);
			board[edgeX - 1][edgeY - 1] = 1;
		}
		for (i = 0; i < vertexnum; i++) {
			scanf("%d", &start[i]);
		}
		for (i = 0; i < vertexnum; i++) {
			scanf("%d", &last[i]);
		}
		for (i = 0; i < vertexnum; i++) {
			for (k = 0; j < vertexnum; k++) {
				temp[i][k] = board[i][k]; // ��Ÿ�� ����
			}
		}
		for (k = 0; k<vertexnum; k++) {
			for (i = 0; i < vertexnum; i++) {
				for (l = 0; l < vertexnum; l++) {
					if (temp[i][k] + temp[k][l] < temp[i][l]) {
						temp[i][l] = temp[i][k] + temp[k][l];
					}
				}
			}
		}
		for (i = 0; i < vertexnum; i++) {
			if (start[i] == 1) {
				startlist[blackcoinnum] = i;
				blackcoinnum++;
			}
		}
		blackcoinnum = 0;
		for (i = 0; i < vertexnum; i++) {
			if (last[i] == 1) {
				lastlist[blackcoinnum] = i;
				blackcoinnum++;
			}
		}
		for (i = 0; i < blackcoinnum; i++) {
			for (k = 0; k < blackcoinnum; k++) {
				routelist[routelistnum] = temp[startlist[i]][lastlist[k]];
				routelistnum++;
			}
		}
		// routelist���� �ִ밪 ���� ���� �׶��� ��ġ�� i��° ��� �ϸ� startlist[(i/blackcoinnum) - 1]�� �׶��� ���� vertex, lastlist[(i%blackcoinnum)-1]�� �׶��� ���� vertex
		// �׶��� routelistnum�� result�� �����ְ�, �� �ΰ������� ������ �ΰͰ� �����ΰ��� �� ������ �ݺ�(�ݺ�Ƚ���� blackcoinnum��ŭ)
		result = maxRoute(routelist, routelistnum, blackcoinnum);
		resultlist[casenum] = result;
	}
	
	for (j = 0; j < casenum; j++) {
		printf("%d\n", resultlist[casenum]);
	}

	return 0;
}