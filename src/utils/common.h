#ifndef _COMMON_H_
#define _COMMON_H_

// clang-format off
// clang-format on
#ifndef UNUSED
#define UNUSED(x) (void)(x)
#endif

/* max */
#ifndef MAX
#define MAX(a, b)           \
    ({                      \
        typeof(a) _a = (a); \
        typeof(b) _b = (b); \
        _a > _b ? _a : _b;  \
    })
#endif

#ifndef MIN
#define MIN(a, b)           \
    ({                      \
        typeof(a) _a = (a); \
        typeof(b) _b = (b); \
        _a < _b ? _a : _b;  \
    })
#endif

int max(int a, int b);
int min(int a, int b);

/* swap */
#ifndef SWAP
#define SWAP(type, lhs, rhs) \
    do {                     \
        type temp = lhs;     \
        lhs = rhs;           \
        rhs = temp;          \
    } while (0)
#endif

void swap(void *lhs, void *rhs, size_t size);
void swap_by_temp(int *lhs, int *rhs);
void swap_by_sum(int *lhs, int *rhs);
void swap_by_xor(int *lhs, int *rhs);

/* keyboard */
#define UP_ARROW (char)'A'
#define LEFT_ARROW (char)'D'
#define RIGHT_ARROW (char)'C'
#define DOWN_ARROW (char)'B'

#define ENTER_KEY 10
#define EXIT_BUTTON 27 //ESC
#define PAUSE_BUTTON 112 //P

#ifndef BELL
#define BELL()        \
    do {              \
        printf("\7"); \
    } while (0)
#endif

void gotoxy(int x, int y);
char getch(void);
void clrscr(void);
int kbhit(void);
char wait_4_key(void);

/* sort */
void bubble_sort(int arr[], int len);
int cmp(const void *pa, const void *pb);
void print_array(int arr[], int len);

#endif
