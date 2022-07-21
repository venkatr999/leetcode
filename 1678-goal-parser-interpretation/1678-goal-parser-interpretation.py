class Solution:
    def interpret(self, command: str) -> str:
        s=''
        i=0
        n=len(command)
        while(i<n):
            if(command[i]=='G'):
                s+='G'
            elif(command[i]=='('):
                if(command[i+1]==')'):
                    s+='o'
                    i+=1
                elif(command[i+1]=='a'):
                    s+='al'
                    i+=1
            
            i+=1
        return s
        