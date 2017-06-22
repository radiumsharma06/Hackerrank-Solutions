if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] ="{:.2f}".format(sum(scores)/len(scores))
    query_name = input()
    print(student_marks[query_name])
