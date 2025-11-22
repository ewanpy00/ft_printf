#include "ft_printf.h"

int main(){
    ft_printf("Hello %s, your score is %d%% and your hex ID is %x.\n", "Alice", (void *)95, (void *)255);
    return 0;
}