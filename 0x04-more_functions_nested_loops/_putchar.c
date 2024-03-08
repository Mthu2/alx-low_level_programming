#include <unistd.h>
/**
 * _putchar - writes charactor to stdout.
 */

int _putchar(char c) {

return write(1, &c, 1);
}
