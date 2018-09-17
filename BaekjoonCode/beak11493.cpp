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
				temp[i][k] = board[i][k]; // 런타임 에러
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
		// routelist에서 최대값 구한 다음 그때의 위치를 i번째 라고 하면 startlist[(i/blackcoinnum) - 1]이 그때의 시작 vertex, lastlist[(i%blackcoinnum)-1]이 그때의 목적 vertex
		// 그때의 routelistnum을 result에 더해주고, 이 두가지에서 시작이 인것과 도착인것을 다 제거후 반복(반복횟수는 blackcoinnum만큼)
		result = maxRoute(routelist, routelistnum, blackcoinnum);
		resultlist[casenum] = result;
	}
	
	for (j = 0; j < casenum; j++) {
		printf("%d\n", resultlist[casenum]);
	}

	return 0;
}