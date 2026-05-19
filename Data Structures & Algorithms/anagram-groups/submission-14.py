class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hash_map = {}
        for word in strs:
            counter = [0] * 26
            for c in word:
                counter[ord(c) - ord("a")] += 1
            index = tuple(counter)
            if index not in hash_map:
                hash_map[index] = []
            hash_map[index].append(word)
        return list(hash_map.values())
            


        
        