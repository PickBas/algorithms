def partition(data, p, r):
    index = p - 1
    pivot = data[r]
    for i in range(p, r):
        if data[i] < pivot:
            index += 1
            data[i], data[index] = data[index], data[i]
    data[index + 1], data[r] = data[r], data[index + 1]
    return index + 1


def quickSort(data, p, r):
    if p >= r:
        return
    q = partition(data, p, r)
    quickSort(data, p, q - 1)
    quickSort(data, q + 1, r)


def main():
    data = list(map(int, input().split()))
    n = len(data)
    quickSort(data, 0, n - 1)
    for i in data:
        print(i, end=' ')


if __name__ == '__main__':
    main()
