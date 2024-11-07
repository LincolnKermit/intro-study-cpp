#include <windows.h>
#include <stdio.h>
#include <conio.h>

#define CONIO_API extern  __declspec(dllexport)

#define BLACK			0
#define BLUE			(FOREGROUND_BLUE)
#define GREEN			(FOREGROUND_GREEN)
#define CYAN			(FOREGROUND_BLUE|FOREGROUND_GREEN)
#define RED				(FOREGROUND_RED)
#define MAGENTA			(FOREGROUND_RED|FOREGROUND_BLUE)
#define BROWN			(FOREGROUND_RED|FOREGROUND_GREEN)
#define LIGHTGRAY		(FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE)
#define DARKGRAY		(FOREGROUND_INTENSITY)
#define LIGHTBLUE		(FOREGROUND_INTENSITY|FOREGROUND_BLUE)
#define LIGHTGREEN		(FOREGROUND_INTENSITY|FOREGROUND_GREEN)
#define LIGHTCYAN		(FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN)
#define LIGHTRED		(FOREGROUND_INTENSITY|FOREGROUND_RED)
#define LIGHTMAGENTA	(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE)
#define YELLOW			(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN)
#define WHITE			(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE)

#define CONWIDTH		80
#define CONHEIGHT		50

#define	C80				3
#define C4350			64


struct text_info {
  unsigned char winleft;        /* bord gauche de fenêtre */
  unsigned char wintop;         /* bord droit     */
  unsigned char winright;       /* bord inférieur */
  unsigned char winbottom;      /* bord supérieur */
  unsigned char attribute;      /* attribut texte */
  unsigned char normattr;       /* attribut normal*/
  unsigned char currmode;       /* mode vidéo courant:
                                   BW40, BW80, C40, C80 ou C4350 */
  unsigned char screenheight;   /* hauteur d'écran */
  unsigned char screenwidth;    /* largeur d'écran */
  unsigned char curx;           /* coordonnée x dans fenêtre */
  unsigned char cury;           /* coordonnée y dans fenêtre */
};

void	CONIO_API	gotoxy(int x, int y);
int		CONIO_API	wherex();
int 	CONIO_API	wherey();
void	CONIO_API	textcolor(int color);
void	CONIO_API	textbackground(int color);
void	CONIO_API	textattr(int color);
int		CONIO_API	gettext(int left, int top, int right, int bottom, void *destin);
int		CONIO_API	puttext(int left, int top, int right, int bottom, void *source);
int		CONIO_API	movetext(int left, int top, int right, int bottom, int destleft, int desttop);
void	CONIO_API	clrscr();
void	CONIO_API	clreol();
void	CONIO_API	delline();
void	CONIO_API	insline();
void	CONIO_API	window(int left, int top, int right, int bottom);
void	CONIO_API	gettextinfo(struct text_info *Info);
int		CONIO_API	qprintf(const char *Fmt, ...);
void	CONIO_API	delay(int Ms);
