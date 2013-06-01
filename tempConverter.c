float temperature( float fahr)
{
    float x ;
    x = (5.0/9.0)*(fahr - 32);
    printf("%10.2f degrees fahrenheit is equivilant to %f degrees celsius\n" , fahr, x);
    return x;
}

main()
{
temperature(10);
temperature(100);
temperature(0);
temperature(32);

}
