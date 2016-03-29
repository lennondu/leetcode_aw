bool canWinNim(int n)
{
    if(n==0)
    {
        return true;
    }
    else if(n<4)
    {
        return false;
    }
    else
    {
        return canWinNim(n%4);
    }
}
