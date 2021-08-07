#include <iostream>

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        std::cout << "Only put 1 argument.";
    }
    else
    {
        int num = atoi(argv[1]);
        int iterations;
        while (num != 1)
        {
            std::cout << num << " ";
            if (num & 1)
            {
                num = 3 * num + 1;
                iterations++;
            }
            else
            {
                num = num / 2;
                iterations++;
            }
        }
        std::cout << num << std::endl;
        std::cout << "Went through " << iterations + 1 << " iterations" << std::endl;
        return 0;
    }
}