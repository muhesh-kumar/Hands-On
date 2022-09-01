pow2 :: Int -> Bool

pow2 1 = True
pow2 x
    | x `mod` 2 == 0 && x > 0 = pow2 (x `div` 2) 
    | x == 1 = True
    | otherwise = False

f1 :: [Int] -> [Int]

f1 [] = []
f1 (l:ls)
    | pow2 l == True = (2 * l):(f1 ls)
    | otherwise = 0:(f1 ls)

f2 :: [Int] -> [Char]

f2 [] = ""
f2 l
    | (l!!(length l - 1)) > (length l - 1) = (f2 (init l)) ++ "a"
    | otherwise = (f2 (init l)) ++ "b"

f3 :: [Int] -> [Int]

f3 [] = []
f3 l
    | (init l) == [] || (init l)!!(length (init l) - 1) /= (l!!(length l - 1)) = f3 (init l) ++ [l!!(length l - 1)]
    | otherwise = f3 (init l)


f4 :: [Int] -> [[Int]]

f4 [] = []
f4 [a] = [[a]]
f4 l 
    | l!!(length l - 1) < (init l)!!(length (init l) - 1) = f4 (init l) ++ [[l!!(length l - 1)]]
    | otherwise = init(f4 (init l)) ++ [(f4 (init l))!!(length (f4 (init l)) - 1) ++ [l!!(length l - 1)]]

-- | otherwise = init (f4 init l) ++ ((f4 (init l))!!(length (f4 init l) - 1) ++ [l!!(length l - 1)]) 


-- a = [4, 5, 1, 2, 3]
-- [[4, 5], [1, 2]]

-- a = [1, 2]
-- [[1]]
