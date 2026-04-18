class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        testSet = []
        testSet2 = []
        for x in s:
            testSet.append(x)
        for x in t:
            testSet2.append(x)
        testSet.sort()
        testSet2.sort()
        if(testSet == testSet2):
            print(testSet, testSet2)
            return True
        return False