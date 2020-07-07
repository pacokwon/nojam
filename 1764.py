unheard = set()
unseen = set()
N, M = (int(x) for x in input().split())
for _ in range(N):
    unheard.add(input())
for _ in range(M):
    unseen.add(input())

both = sorted(list(unheard & unseen))
print(len(both))
for name in both:
    print(name)
