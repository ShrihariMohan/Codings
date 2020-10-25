    #!/usr/bin/python3
    def power(num,idx):
        if(idx==1):
        return(num)
        else:
        return(num * power(num,idx-1))

    print ( power(2 , 3))
