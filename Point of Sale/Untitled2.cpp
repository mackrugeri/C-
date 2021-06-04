#include <iostream>
#include <cstdlib>
using namespace std;


struct coord_struct {
 double x;
 double y;
};
typedef struct coord_struct coord;
int main() {
 char *s;
 coord *c = (coord *)malloc(sizeof(coord));
 printf("Enter x: ");
 fgets(s, 79, stdin);
 c->x = atof(s);
 printf("Enter y: ");
 fgets(s, 79, stdin);
 c->y = atof(s);
 printf("Coords are (%lf, %lf).\n", c->x, c->y);
 free(c);
 free(s);
 return 0;
}
