class Solution:
    def matrixReshape(self, mat, r, c):
        m = len(mat)
        n = len(mat[0])
        
        
        if m * n != r * c:
            return mat
        
        
        flat = [num for row in mat for num in row]
        
        
        reshaped = []
        for i in range(r):
            reshaped.append(flat[i * c : (i + 1) * c])
        
        return reshaped
