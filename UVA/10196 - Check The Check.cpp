#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cstdlib>

using namespace std;
#define d(c) cout << #c << " " << c << endl;
char a[8][8]; bool checkBlack=false, checkWhite=false; int GameID=0;

bool range(int a, int b) {
  if((a>=0 && a<8) && (b>=0 && b<8)) return true;
  else return false;
}

void checkStraight(int x, int y, int color) {

  // For horizontal right
  for(int i = x, j = 1 ; j < 8; j++) {
    if(!range(x, y+j)) continue;
    char p = a[x][y+j];
    if(p == '.') continue;
    if(color == 1) {
      // White
      if (p == 'Q' || p == 'R') {
        checkBlack = true;
        return;
      }
      else break;
    }
    else if (color == 2) {
      // if(p != 'q' || p != 'r') break;
      if (p == 'q' || p == 'r') {
        checkWhite = true;
        return;
      }
      else break;
    }
  }

  // For horizontal left 
  for(int i = x, j = -1 ; j > -8; j--) {
    if(!range(x, y+j)) continue;
    
    char p = a[x][y+j];
    if(p == '.') continue;

    if(color == 1) {
      // White
      // if(p != 'Q' || p != 'R') break;
      if (p == 'Q' || p == 'R') {
        checkBlack = true;
        return;
      }
      else break;
    }
    else if (color == 2) {
      // if(p != 'q' || p != 'r') break;
      if (p == 'q' || p == 'r') {
        checkWhite = true;
        return;
      }
      else break;
    }
  }

  // For Vertical Up
  for(int i = -1, j = y ; i > -8; i--) {
    if(!range(x+i, y)) continue;
    
    char p = a[x+i][y];
    if(p == '.') continue;

    if(color == 1) {
      // White
      // if(p != 'Q' || p != 'R') break;
      if (p == 'Q' || p == 'R') {
        checkBlack = true;
        return;
      }
      else break;
    }
    else if (color == 2) {
      // if(p != 'q' || p != 'r') break;
      if (p == 'q' || p == 'r') {
        checkWhite = true;
        return;
      }
      else break;
    }
  }

  // For Vertical Down
  for(int i = 1, j = y ; i < 8; i++) {
    if(!range(x+i, y)) continue;
    
    char p = a[x+i][y];
    if(p == '.') continue;

    if(color == 1) {
      // White
      // if(p != 'Q' || p != 'R') break;
      if (p == 'Q' || p == 'R') {
        checkBlack = true;
        return;
      }
      else break;
    }
    else if (color == 2) {
      // if(p != 'q' || p != 'r') break;
      if (p == 'q' || p == 'r') {
        checkWhite = true;
        return;
      }
      else break;
    }
  }
}

void checkDiagonal(int x, int y, int color) {
  for(int i = 1, j = 1; i<8 && j<8; i++, j++) {
    if(!range(x+i, y+j)) continue;
    char p = a[x+i][y+j]; 
    //d(p);
    if(p == '.') continue;
    else if((color == 1) && (p == 'Q' || p == 'B')) {
      checkBlack = true;
      return;
    }
    else if((color == 2) && (p == 'q' || p == 'b')) {
      checkWhite = true;
      return;
    }
    else break;
  }

  for(int i = -1, j = -1; i>-8 && j>-8; i--, j--) {
    if(!range(x+i, y+j)) continue;
    char p = a[x+i][y+j]; 

    if(p == '.') continue;
    // if(p != '.' || p != 'Q' || p!= 'B' || p != 'b' || p != 'q') break;
    else if((color == 1) && (p == 'Q' || p == 'B')) {
      checkBlack = true;
      return;
    }
    else if((color == 2) && (p == 'q' || p == 'b')) {
      checkWhite = true;
      return;
    }
    else break;
  }

  for(int i = -1, j = 1; i>-8 && j<8; i--, j++) {
    if(!range(x+i, y+j)) continue;
    char p = a[x+i][y+j]; 

    if(p == '.') continue;
    // if(p != '.' || p != 'Q' || p!= 'B' || p != 'b' || p != 'q') break;
    else if((color == 1) && (p == 'Q' || p == 'B')) {
      checkBlack = true;
      return;
    }
    else if((color == 2) && (p == 'q' || p == 'b')) {
      checkWhite = true;
      return;
    }
    else break;
  }

  for(int i = 1, j = -1; i<8 && j>-8; i++, j--) {
    if(!range(x+i, y+j)) continue;
    char p = a[x+i][y+j]; 

    if(p == '.') continue;
    // if(p != '.' || p != 'Q' || p!= 'B' || p != 'b' || p != 'q') break;
    else if((color == 1) && (p == 'Q' || p == 'B')) {
      checkBlack = true;
      return;
    }
    else if((color == 2) && (p == 'q' || p == 'b')) {
      checkWhite = true;
      return;
    }
    else break;
  }

}

int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  while(1) {
    bool flag = true; int kx, ky, Kx, Ky;
    for(int i=0; i<8; i++) {
      for(int j=0; j<8; j++) {
        cin >> a[i][j];
        if(a[i][j] != '.') flag = false;
        if(a[i][j] == 'k') kx = i, ky = j;
        else if(a[i][j] == 'K') Kx = i, Ky = j; 
      }
    }
    if(flag) break;

    if(a[kx+1][ky-1] == 'P' || a[kx+1][ky+1] == 'P') checkBlack = true;
    if(a[Kx-1][Ky-1] == 'p' || a[Kx-1][Ky+1] == 'p') checkWhite = true;

    // Queen and Rook
    checkStraight(kx, ky, 1); // Black
    checkStraight(Kx, Ky, 2); // White
    
    // Queen and Bishop
    checkDiagonal(kx, ky, 1);
    checkDiagonal(Kx, Ky, 2);
    
    int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int dy[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    // For knights
    for(int i=0; i<8; i++) {
      if (!range(kx+dx[i], ky+dy[i])) continue;
      char p = a[kx+dx[i]][ky+dy[i]];
      if(p == 'N') checkBlack = true;
    }

    for(int i=0; i<8; i++) {
      if (!range(Kx+dx[i], Ky+dy[i])) continue;
      char p = a[Kx+dx[i]][Ky+dy[i]];
      if(p == 'n') checkWhite = true;
    }

    if(checkWhite == false && checkBlack == false){
      printf("Game #%d: no king is in check.\n", ++GameID);
    }
  
    else if (checkWhite == true && checkBlack == false) {
      printf("Game #%d: white king is in check.\n", ++GameID);
      // cout << "Game #" << case++ << ": white king is in check.\n";
    }
  
    else if (checkWhite == false && checkBlack == true) {
     printf("Game #%d: black king is in check.\n", ++GameID);
     // cout << "Game #" << case++ << ": black king is in check.\n";
    }

    checkBlack = checkWhite = false; 
    
  }
}
