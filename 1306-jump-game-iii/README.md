<h2><a href="https://leetcode.com/problems/jump-game-iii/">1306. Jump Game III</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of non-negative integers <code style="user-select: auto;">arr</code>, you are initially positioned at <code style="user-select: auto;">start</code>&nbsp;index of the array. When you are at index <code style="user-select: auto;">i</code>, you can jump&nbsp;to <code style="user-select: auto;">i + arr[i]</code> or <code style="user-select: auto;">i - arr[i]</code>, check if you can reach to <strong style="user-select: auto;">any</strong> index with value 0.</p>

<p style="user-select: auto;">Notice that you can not jump outside of the array at any time.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [4,2,3,0,3,1,2], start = 5
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> 
All possible ways to reach at index 3 with value 0 are: 
index 5 -&gt; index 4 -&gt; index 1 -&gt; index 3 
index 5 -&gt; index 6 -&gt; index 4 -&gt; index 1 -&gt; index 3 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [4,2,3,0,3,1,2], start = 0
<strong style="user-select: auto;">Output:</strong> true 
<strong style="user-select: auto;">Explanation: 
</strong>One possible way to reach at index 3 with value 0 is: 
index 0 -&gt; index 4 -&gt; index 1 -&gt; index 3
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [3,0,2,1,2], start = 2
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation: </strong>There is no way to reach at index 1 with value 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i] &lt;&nbsp;arr.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start &lt; arr.length</code></li>
</ul>
</div>