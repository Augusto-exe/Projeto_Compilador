int K;

int gis(int a)
{
   int ret;
   int b;
   if (a == 0) { return 1; };
   b = a - 1;
   ret = a + gis(b);
   return ret;
}

int main()
{
  K = gis(3);
  K = K + 1;
  printf("%d\n",K );
  return 0;
}
