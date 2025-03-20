public static class Utility
{
    public static float ToPercentage(this int number, int percentage = 100) =>
        (float)number / percentage;
}