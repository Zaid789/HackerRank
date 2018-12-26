/*https://www.hackerrank.com/challenges/apple-and-orange/problem*/




// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    int apple = 0 , orange=0 ; 
for (int i=0 ; i < apples_count ; i++)
{
    if (a+apples[i] >= s && a+apples[i] <= t)
    apple++;
}
for (int i=0 ; i < oranges_count ; i++ )
{
    if (b+oranges[i] >= s && b+oranges[i] <=  t)
    orange++;
}
printf("%d\n",apple);
printf("%d\n",orange);

}
