#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 3; i <= n; i += 3){
        printf("%d ", i);
    }
    return 0;
}
