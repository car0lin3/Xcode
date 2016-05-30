#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
    /* 분할할 문자열을 담을 버퍼를 할당합니다. */
    char string[64] = {0};
    /* 분할 기준 문자를 지정합니다. */
    char delimiters[1] = " ";
    /* 연속해서 분할 작업을 할 것이므로, strtok가 반환하는 문자 위치를 보관합니다. */
    char * pointer = NULL;
    /* 예시 문자열을 버퍼에 복사합니다. */
    strcpy(string, "I Love You Always");
    printf("Original string before loop: %s\n", string);
    /* strtok을 처음 호출할 때는 분할할 문자열을 첫 번째 인자에 전달합니다. */
    pointer = strtok(string, delimiters);
    /* 무한루프 */
    for(;;)
    {
        /* strtok가 NULL을 반환했다면 루프 종료합니다. */
        if(pointer == NULL) break;
        else printf("%s\n", pointer);
        /* 계속해서 문자열을 분할할 때는 첫 번째 인자를 NULL로 지정합니다. */
        /* string 문자열을 분할하던 중이었음을 strtok 함수가 이미 기억하고 있기 때문입니다. */
        pointer = strtok(NULL, delimiters);
    }
    /* strtok을 사용한 후 원래 문자열이 변형되었음을 알 수 있습니다. */
    /* 즉, 기준문자로 사용되었던 ;, - 등의 문자가 모두 NULL로 치환되었으므로 */
    /* 아래에서는 원래 문자열의 일부만을 출력합니다. */
    printf("original string: %s\n", string);
    return 0;
}