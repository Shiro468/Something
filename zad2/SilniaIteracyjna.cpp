int SilniaIt(int n)
{
    int silnia = 1;
    for(int i =n; i >= 1; i--)
    {
        silnia = silnia * i;
    }
    return silnia;
}
