-- problem #1

subSeq :: String -> String -> Bool
subSeq "" s = True
subSeq s "" = False
subSeq s t
  | s!!0 == t!!0 = subSeq (tail s) (tail t)
  | otherwise = subSeq s (tail t)

-- problem #2

equals :: String -> String -> Bool
equals "" t = True
equals s t = s!!0 == t!!0 && equals (tail s) (tail t)

subWord :: String -> String -> Bool
subWord s t
  | length s > length t = False
  | otherwise = equals s t || subWord s (tail t)

-- problem #3(a)

checkA :: [a] -> Bool
checkA a 
  | length a > 0 = True
  | otherwise = False

isMatrix :: [[a]] -> Bool
isMatrix [] = False
isMatrix a = (checkA (a!!0)) && (length (tail a) == 0 || isMatrix (tail a))

-- problem #3(b)

helperB :: [[a]] -> Int -> Int -> Bool
helperB a idx totRows
  | idx == totRows = True
  | otherwise = (length (a!!idx) == totRows) && (helperB a (idx + 1) totRows)

isSquareMatrix :: [[a]] -> Bool
isSquareMatrix [] = False
isSquareMatrix a = helperB a 0 (length a)

-- problem #3(c)

addable :: [[a]] -> [[a]] -> Bool
addable [] [] = True
addable a [] = False
addable [] b = False
addable (a:as) (b:bs) = length a == length b && addable as bs

-- problem #3(d)

-- add each row
helperC :: [Int] -> [Int] -> [Int] 
helperC [] [] = []
helperC (a:as) (b:bs) = [a + b] ++ (helperC as bs) 

addMatrices :: [[Int]] -> [[Int]] -> [[Int]]
addMatrices [] [] = []
addMatrices (a:as) (b:bs)
  | addable (a:as) (b:bs) == False = []
  | otherwise = [helperC a b] ++ (addMatrices as bs)

-- problem #3(e)

multiplyable :: [[a]] -> [[a]] -> Bool
multiplyable [] [] = True
multiplyable a [] = False
multiplyable [] b = True
multiplyable (a:as) b = (length a == length b) && (multiplyable as b)

-- problem #3(f)

-- gives ans[i][aColIdx]
helperF1 :: [Int] -> Int -> [[Int]] -> Int -> Int
helperF1 [] acolIdx b bColIdx = 0
helperF1 a aColIdx b bColIdx
  | aColIdx == length b = 0
  | otherwise = (a!!aColIdx * (b!!aColIdx)!!bColIdx) + (helperF1 a (aColIdx + 1) b bColIdx)

-- gives ans[i]
helperF2 :: [Int] -> [[Int]] -> Int -> [Int]
helperF2 [] b bColIdx = []
helperF2 a b bColIdx
  | bColIdx == length (b!!0) = []
  | otherwise = [helperF1 a 0 b bColIdx] ++ (helperF2 a b (bColIdx + 1))

multiplyMatrices :: [[Int]] -> [[Int]] -> [[Int]]
multiplyMatrices [] b = []
multiplyMatrices (a:as) b
  | multiplyable (a:as) b == False = []
  | otherwise = [helperF2 a b 0] ++ (multiplyMatrices as b)

