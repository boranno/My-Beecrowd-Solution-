#include<stdio.h>
#include<math.h>
//Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:
//Distance = sqrt(x2-x1)^2+(y2-y1)^2
int main()
{
    double x1,y1,x2,y2,dist;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.4lf\n",dist);
    return 0;
}