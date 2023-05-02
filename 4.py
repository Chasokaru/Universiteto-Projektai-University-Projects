import time
import random

def partition(nums, low, high):
    # We select the middle element to be the pivot. Some implementations select
    # the first element or the last element. Sometimes the median value becomes
    # the pivot, or a random one. There are many more strategies that can be
    # chosen or created.
    pivot = nums[(low + high) // 2]
    i = low - 1
    j = high + 1
    while True:
        i += 1
        while nums[i] < pivot:
            i += 1

        j -= 1
        while nums[j] > pivot:
            j -= 1

        if i >= j:
            return j

        # If an element at i (on the left of the pivot) is larger than the
        # element at j (on right right of the pivot), then swap them
        nums[i], nums[j] = nums[j], nums[i]


def quick_sort(nums):
    # Create a helper function that will be called recursively
    def _quick_sort(items, low, high):
        if low < high:
            # This is the index after the pivot, where our lists are split
            split_index = partition(items, low, high)
            _quick_sort(items, low, split_index)
            _quick_sort(items, split_index + 1, high)

    _quick_sort(nums, 0, len(nums) - 1)


# function for shell sort
def shellsort(items2): 
  n = len(items2)
  gap = n // 2 
  while gap > 0: 
    for i in range(gap,n): 
      temp = items2[i] 
      j = i 
      while  j >= gap and items2[j-gap] > temp: 
        items[j] = items2[j-gap] 
        j = j - gap 
      items2[j] = temp 
    gap = gap // 2

    
# function to print list
def PrintList(items):
  for i in items:
    print(i, end=" ")
  print("\n")
  
# test the code                 
k = int(input('Enter amount of numbers you will to be added: '))
items = [random.randint(1,999999) for _ in range(k)]
helper = items
q1 = items
q2 = items
q3 = items
q4 = items
q5 = items
q6 = items
q7 = items
q8 = items
q9 = items
q10 = items
s1 = items
s2 = items
s3 = items
s4 = items
s5 = items
s6 = items
s7 = items
s8 = items
s9 = items
s10 = items
'''for _ in range(k):
    items.append(int(input('Enter a number: ')))'''
  

#print("Original List: ")
#PrintList(items)
quick_sort(helper)

print("Quicksort 1: ")
sq = time.time()
start = time.time()
quick_sort(q1)
end = time.time()
#print(items)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Quicksort 2: ")
start = time.time()
quick_sort(q2)
end = time.time()
#print(items)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Quicksort 3: ")
start = time.time()
quick_sort(q3)
end = time.time()
#print(items)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Quicksort 4: ")
start = time.time()
quick_sort(q4)
end = time.time()
#print(items)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Quicksort 5: ")
start = time.time()
quick_sort(q5)
end = time.time()
#print(items)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Quicksort 6: ")
start = time.time()
quick_sort(q6)
end = time.time()
#print(items)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Quicksort 7: ")
start = time.time()
quick_sort(q7)
end = time.time()
#print(items)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Quicksort 8: ")
start = time.time()
quick_sort(q8)
end = time.time()
#print(items)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Quicksort 9: ")
start = time.time()
quick_sort(q9)
end = time.time()
#print(items)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Quicksort 10: ")
start = time.time()
quick_sort(q10)
end = time.time()
endq = time.time()
#print(items)
print("--- %s seconds ---" % (end - start))

print("\n")
print("Quicksort average time in seconds: ")
print((endq - sq)/10)

print("\n")
print("CUT\n")
print("CUT\n")
print("CUT\n")
print("\n")



print("Shell sort 1: ")
ss = time.time()
start = time.time()
shellsort(s1)
end = time.time()
#print(items2)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Shell sort 2: ")
start = time.time()
shellsort(s2)
end = time.time()
#print(items2)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Shell sort 3: ")
start = time.time()
shellsort(s3)
end = time.time()
#print(items2)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Shell sort 4: ")
start = time.time()
shellsort(s4)
end = time.time()
#print(items2)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Shell sort 5: ")
start = time.time()
shellsort(s5)
end = time.time()
#print(items2)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Shell sort 6: ")
start = time.time()
shellsort(s6)
end = time.time()
#print(items2)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Shell sort 7: ")
start = time.time()
shellsort(s7)
end = time.time()
#print(items2)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Shell sort 8: ")
start = time.time()
shellsort(s8)
end = time.time()
#print(items2)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Shell sort 9: ")
start = time.time()
shellsort(s9)
end = time.time()
#print(items2)
print("--- %s seconds ---" % (end - start))

print("\n")

print("Shell sort 10: ")
start = time.time()
shellsort(s10)
end = time.time()
ends = time.time()
#print(items2)
print("--- %s seconds ---" % (end - start))

ends = time.time()
print("\n")
print("Shellsort average time in seconds: ")
print((ends-ss)/10)