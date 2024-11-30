frequency={}
for i in range(10):
    frequency[i]=int(input())
sorted_frequency = sorted(frequency.items(), key=lambda item: (-item[1], item[0]))
for key,value in sorted_frequency:
    print(key)