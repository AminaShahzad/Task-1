def dicGet(item,dic):
    for i in  dic:
        if i==item:
            return dic[i]
        

dic={"1":"@","2":"4"}
x=dicGet("1",dic)
print(x)        