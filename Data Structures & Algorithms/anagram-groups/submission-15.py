class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hash_map = defaultdict(list)
        for word in strs:
            counter = [0] * 26
            for c in word:
                counter[ord(c) - ord("a")] += 1
            index = tuple(counter)
            hash_map[index].append(word)
        return list(hash_map.values())
            
# Time: O(m * n), m - no of words, n - lenght of the longest word
# Space: O(m) m - no of words
        
        