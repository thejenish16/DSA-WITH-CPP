#include "overload.cpp"

int main()
{
    Number aem1, aem2, result;

    aem1.inputvalue();
    aem2.inputvalue();

    result = aem1 > aem2;

    result.displaymax();

    return 0;
}
