# Longest subarray with sum divisible by K
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array containing <strong style="user-select: auto;">N</strong> integers and a positive integer <strong style="user-select: auto;">K</strong>, find the length of the longest sub array with sum of the elements divisible by the given value <strong style="user-select: auto;">K</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>A[] = {2, 7, 6, 1, 4, 5}
K = 3
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong>The subarray is {7, 6, 1, 4}
with sum 18, which is divisible by 3.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>A[] = {-2, 2, -5, 12, -11, -1, 7}
K = 3
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:
</strong>The subarray is {2,-5,12,-11,-1} with
sum -3, which is divisible by 3.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">longSubarrWthSumDivByK()</strong> that takes an array <strong style="user-select: auto;">(arr)</strong>, sizeOfArray <strong style="user-select: auto;">(n)</strong>, positive integer <strong style="user-select: auto;">K</strong>, and return the length of the longest subarray which has sum divisible by <strong style="user-select: auto;">K</strong>. The driver code takes care of the printing.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=N,K&lt;=10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
-10<sup style="user-select: auto;">5</sup>&lt;=A[i]&lt;=10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
&nbsp;</p>
</div>