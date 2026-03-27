#include <stdio.h>
#include <math.h>

int main() {
    double x = 9.0;
    double y = 2.5;

    /* sqrt:  제곱근 */
    printf("%.2f\n", sqrt(x));
    /* pow: 거듭제곱 */
    printf("%.2f\n", pow(x, y));
    /* ceil: 올림 */
    printf("%.1f\n", ceil(y));
    /* floor: 내림 */
    printf("%.1f\n", floor(y));

    return 0;
}
