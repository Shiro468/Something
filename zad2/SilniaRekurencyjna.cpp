int SilniaReku(int n)
{
    if(n < 2)
    {
        return 1;
    }
    return n* SilniaReku((n -1));
}
