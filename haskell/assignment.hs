-- f :: Bool -> Bool -> Bool -> Bool
-- f x y z = (not x || y) && (not y || z) && (not z || x)

-- f :: Int -> Int
-- f n = g n 0
--
-- g :: Int -> Int -> Int
-- g n a
--   | n == 0 = a
--   | otherwise = g q (100 * a + r)
--   where
--   (q, r) = divMod n 10


-- f :: Int -> Int -> Bool -> Bool
-- f x y z = ((x+1) == y) == z

-- f :: Int -> Int -> Int -> Bool
-- f x y z = not (x < y) == (y < z || z > 0)

f :: Int -> Int -> Int
f x y
 | x <= 0 = 0
 | even x = f (x `div` 2) (y + y)
 | odd x = f (x `div` 2) (y + y) + y
