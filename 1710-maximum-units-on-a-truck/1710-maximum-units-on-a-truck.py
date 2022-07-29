class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        n=truckSize
        boxTypes.sort(key=lambda x:x[1])
        boxTypes.reverse()
        print(boxTypes)
        unit=0
        i=0
        t=len(boxTypes)
        while (i<t):
            if(n<boxTypes[i][0]):
                break
            unit+=boxTypes[i][0]*boxTypes[i][1]
            n-=boxTypes[i][0]
            i+=1
        if(i>t-1 and n<1):
            return unit
        if(n>0 and i<t):
            unit+=n*boxTypes[i][1]
        return unit