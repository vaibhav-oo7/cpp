n = int(input())
stack = []

while n > 0:
    n -= 1
    s = input()
    command = s[0:3]

    if command == "cd ":
        address = s[3:]
        if(address[0]=="/"):
            stack.clear()
        arr = address.split("/")
        #print(arr)
        for word in arr:
            if word == "..":
                if len(stack) != 0:
                    stack.pop()
                else:
                    continue
            elif len(word)>0:
                stack.append(word) 

    if command == "pwd":
        ans = "/"
        if len(stack) == 0:
            print(ans)
            continue
        else:
            #print (stack)
            for words in stack:
                ans += words
                ans += "/"
            print(ans)

stack.clear()
