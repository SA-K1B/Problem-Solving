int main()
{
    for (int a = 1; a <= 500; a++)
    {
        for (int b = 1; b <= 500; b++)
        {
            for (int c = 1; c <= 500; c++)
            {
                if ((a*a)+(b*b) == c*c && c <= 500)
                {
                    cout << a << " + " << b << " = " << c << endl;
                }
            }
        }
    }
}
