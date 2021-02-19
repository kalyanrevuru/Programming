import numpy

def split_to_integer(str): 
    num = "" 
    for i in range(len(str)): 
        if (str[i].isdigit()): 
            num = num +str[i]   
    return num

def split_to_string(str):
    alpha=""
    for i in range(len(str)):
        if((str[i] >= 'A' and str[i] <= 'Z') or (str[i] >= 'a' and str[i] <= 'z')): 
                alpha += str[i] 
    return alpha

def Lists_from_list(L): 
    res = [] 
    for s in L: 
        sub_list_0 = s.split(' ') 
        sub_list_1=[]
        for i in range(3):
            sub_list_1.append(int(split_to_integer(sub_list_0[i])))
        res.append(sub_list_1)  
    return(res)

Sample= list(map(str,input().split()))  #input for maximimum limit of nutrients
Input= input().split("|")


List_int_Sample=[]
for i in range(3):
    List_int_Sample.append(int(split_to_integer(Sample[i])))
print(List_int_Sample)

Input_new=Lists_from_list(Input) 
print(Input_new)


    

    
