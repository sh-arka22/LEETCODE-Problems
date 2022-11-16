# Brackets in Matrix Chain Multiplication
## Hard
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array&nbsp;<strong style="user-select: auto;">p[]</strong>&nbsp;of length <strong style="user-select: auto;">n </strong>used to denote the dimensions of a series of matrices such that&nbsp;dimension of <strong style="user-select: auto;">i'th</strong> matrix is <strong style="user-select: auto;">p[i] * p[i+1]</strong>. There are a total of&nbsp;<strong style="user-select: auto;">n-1</strong> matrices.&nbsp;Find the most efficient way to multiply these matrices together.&nbsp;<br style="user-select: auto;">
The problem is not actually to perform the multiplications, but merely to decide in which order to perform the multiplications such that you need to perform minimum number of multiplications. There are&nbsp;many options to multiply a chain of matrices because matrix multiplication is associative i.e.&nbsp;no matter how one&nbsp;parenthesize the product, the result will be the same.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
n = 5
p[] = {1, 2, 3, 4, 5}
<strong style="user-select: auto;">Output:</strong> (((AB)C)D)
<strong style="user-select: auto;">Explaination:</strong> The total number of 
multiplications are (1*2*3) + (1*3*4) 
+ (1*4*5) = 6 + 12 + 20 = 38.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
n = 3
p = {3, 3, 3}
<strong style="user-select: auto;">Output:</strong> (AB)
<strong style="user-select: auto;">Explaination:</strong> The total number of 
multiplications are (3*3*3) = 27.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">matrixChainOrder()</strong> which takes n and p[] as input parameters and returns the string with the proper order of parenthesis for n-1 matrices. Use uppercase alphabets to denote each matrix.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n<sup style="user-select: auto;">3</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n<sup style="user-select: auto;">2</sup>)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
2 ≤ n ≤ 26&nbsp;<br style="user-select: auto;">
1 ≤ p[i] ≤ 500&nbsp;</span></p>
</div>