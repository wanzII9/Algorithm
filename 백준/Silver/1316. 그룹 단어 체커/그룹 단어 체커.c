#include <stdio.h>
#include <string.h>

int main() {
    int count; // 단어의 개수를 입력받는 변수
    scanf("%d", &count); // 단어 개수 입력

    int group_word_count = 0; // 그룹 단어의 개수를 저장할 변수

    for (int i = 0; i < count; i++) {
        char word[101]; // 단어를 저장할 배열
        int alphabet[26] = {0}; // 알파벳 등장 여부를 저장할 배열
        int is_group_word = 1; // 그룹 단어 여부를 저장할 변수
        scanf("%s", word); // 단어 입력

        int length = strlen(word); // 단어의 길이 계산

        // 각 문자가 그룹 단어의 조건을 만족하는지 확인
        for (int j = 0; j < length; j++) {
            if (j > 0 && word[j] != word[j - 1]) { // 현재 문자가 이전 문자와 다르면
                if (alphabet[word[j] - 'a'] > 0) { // 이미 등장한 문자라면
                    is_group_word = 0; // 그룹 단어가 아님
                    break; // 반복문 종료
                }
            }
            alphabet[word[j] - 'a'] = 1; // 해당 문자를 기록
        }

        if (is_group_word) { // 그룹 단어라면
            group_word_count++; // 그룹 단어 개수 증가
        }
    }

    printf("%d\n", group_word_count); // 결과 출력
    return 0;
}