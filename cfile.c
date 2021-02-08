#include<stdio.h> 
int main() { int n=4; int *p=&n; printf("%d\n",(*p)++); return 0; }