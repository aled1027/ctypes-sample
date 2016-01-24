#ifndef SAMPLE_H
#define SAMPLE_H

typedef struct {
      double x, y;
} Point;

extern int gcd(int x, int y);
extern int in_mandel(double x0, double y0, int n);
extern int divide(int a, int b, int *remainder);
extern double avg(double *a, int n);
extern double distance(Point *p1, Point *p2);

#endif
