-- f = g (\x -> x)
-- g k [] = k []
-- g k (x:xs) = g((x:) . k) xs

-- f = (l, length l)
--   where l = [32, 28.3..1]

cdrop :: Int -> [Int] -> [Int]
cdrop n l
  | n <= 0 || null l = l
  | otherwise = cdrop (n - 1) (tail l)
