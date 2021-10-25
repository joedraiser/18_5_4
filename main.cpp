#include <iostream>

void evendigitsR(long long dig, int& ans)
{
    if(dig==0)
        return;
    else if(dig%2==0)
        ans++;

    return evendigitsR(dig/10, ans);
}

void evendigits(long long dig, int& ans)
{
    ans=0;
    evendigitsR(dig, ans);
}

int main()
{
    int ans;

    evendigits(9223372036854775806, ans);
    std::cout << ans;
}
