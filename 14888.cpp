#include <iostream>

int N;
char operators[15];
int operands[15];
int used[15];
char sequence[15];
int minimum = 1e9;
int maximum = -1e9;

int op(int operand1, int op, int operand2) {
    switch (op) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
    }
}

int calculate() {
    int result = operands[0];
    for (int i = 0; i < N - 1; i++) {
        result = op(result, sequence[i], operands[i + 1]);
    }

    /* printf("%d\n", result); */
    return result;
}

void construct(int nth) {
    if (nth == N - 1) {
        int res = calculate();
        minimum = minimum > res ? res : minimum;
        maximum = maximum < res ? res : maximum;
        return;
    }

    for (int i = 0; i < N - 1; i++) {
        if (!used[i]) {
            used[i] = 1;
            sequence[nth] = operators[i];
            construct(nth + 1);
            used[i] = 0;
        }
    }
}

int main() {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> operands[i];

    int cnt = 0;
    char ops[] = "+-*/";
    for (int i = 0; i < 4; i++) {
        int tmp;
        std::cin >> tmp;
        for (int j = 0; j < tmp; j++)
            operators[cnt++] = ops[i];
    }

    construct(0);
    std::cout << maximum << std::endl << minimum;

    return 0;
}
