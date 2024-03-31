from itertools import combinations

def sum_of_subset(li, size, target_sum):
    ck = 0
    for i in range(size+1):
        if ck==1:
            break

        for sub_set in combinations(li, i):

            if sum(sub_set) == target_sum:
                ck = 1
                for j in sub_set:
                    print(j, end=" ")
                print()
                break

def main():
    T = int(input())
    if T== -1:
        return

    while T!=0:
        N = int(input())

        if N== -1:
            return

        total = 0;
        li = []

        for i in range(1,N+1):
            total += i;
            li.append(i)
            print(i, end=" ")
        print()

        temp = list(map(int, input().split()))
        if -1 in temp:
            return
            
        total += sum(temp)

        li += temp


        sum_of_subset(li, N, total/2)



if __name__ == '__main__':
    main()
