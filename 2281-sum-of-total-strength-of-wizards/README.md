<h2><a href="https://leetcode.com/problems/sum-of-total-strength-of-wizards/">2281. Sum of Total Strength of Wizards</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">As the ruler of a kingdom, you have an army of wizards at your command.</p>

<p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">strength</code>, where <code style="user-select: auto;">strength[i]</code> denotes the strength of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> wizard. For a <strong style="user-select: auto;">contiguous</strong> group of wizards (i.e. the wizards' strengths form a <strong style="user-select: auto;">subarray</strong> of <code style="user-select: auto;">strength</code>), the <strong style="user-select: auto;">total strength</strong> is defined as the <strong style="user-select: auto;">product</strong> of the following two values:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The strength of the <strong style="user-select: auto;">weakest</strong> wizard in the group.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">total</strong> of all the individual strengths of the wizards in the group.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">sum</strong> of the total strengths of <strong style="user-select: auto;">all</strong> contiguous groups of wizards</em>. Since the answer may be very large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a contiguous <strong style="user-select: auto;">non-empty</strong> sequence of elements within an array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> strength = [1,3,1,2]
<strong style="user-select: auto;">Output:</strong> 44
<strong style="user-select: auto;">Explanation:</strong> The following are all the contiguous groups of wizards:
- [1] from [<u style="user-select: auto;"><strong style="user-select: auto;">1</strong></u>,3,1,2] has a total strength of min([1]) * sum([1]) = 1 * 1 = 1
- [3] from [1,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,1,2] has a total strength of min([3]) * sum([3]) = 3 * 3 = 9
- [1] from [1,3,<u style="user-select: auto;"><strong style="user-select: auto;">1</strong></u>,2] has a total strength of min([1]) * sum([1]) = 1 * 1 = 1
- [2] from [1,3,1,<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>] has a total strength of min([2]) * sum([2]) = 2 * 2 = 4
- [1,3] from [<u style="user-select: auto;"><strong style="user-select: auto;">1,3</strong></u>,1,2] has a total strength of min([1,3]) * sum([1,3]) = 1 * 4 = 4
- [3,1] from [1,<u style="user-select: auto;"><strong style="user-select: auto;">3,1</strong></u>,2] has a total strength of min([3,1]) * sum([3,1]) = 1 * 4 = 4
- [1,2] from [1,3,<u style="user-select: auto;"><strong style="user-select: auto;">1,2</strong></u>] has a total strength of min([1,2]) * sum([1,2]) = 1 * 3 = 3
- [1,3,1] from [<u style="user-select: auto;"><strong style="user-select: auto;">1,3,1</strong></u>,2] has a total strength of min([1,3,1]) * sum([1,3,1]) = 1 * 5 = 5
- [3,1,2] from [1,<u style="user-select: auto;"><strong style="user-select: auto;">3,1,2</strong></u>] has a total strength of min([3,1,2]) * sum([3,1,2]) = 1 * 6 = 6
- [1,3,1,2] from [<u style="user-select: auto;"><strong style="user-select: auto;">1,3,1,2</strong></u>] has a total strength of min([1,3,1,2]) * sum([1,3,1,2]) = 1 * 7 = 7
The sum of all the total strengths is 1 + 9 + 1 + 4 + 4 + 4 + 3 + 5 + 6 + 7 = 44.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> strength = [5,4,6]
<strong style="user-select: auto;">Output:</strong> 213
<strong style="user-select: auto;">Explanation:</strong> The following are all the contiguous groups of wizards: 
- [5] from [<u style="user-select: auto;"><strong style="user-select: auto;">5</strong></u>,4,6] has a total strength of min([5]) * sum([5]) = 5 * 5 = 25
- [4] from [5,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,6] has a total strength of min([4]) * sum([4]) = 4 * 4 = 16
- [6] from [5,4,<u style="user-select: auto;"><strong style="user-select: auto;">6</strong></u>] has a total strength of min([6]) * sum([6]) = 6 * 6 = 36
- [5,4] from [<u style="user-select: auto;"><strong style="user-select: auto;">5,4</strong></u>,6] has a total strength of min([5,4]) * sum([5,4]) = 4 * 9 = 36
- [4,6] from [5,<u style="user-select: auto;"><strong style="user-select: auto;">4,6</strong></u>] has a total strength of min([4,6]) * sum([4,6]) = 4 * 10 = 40
- [5,4,6] from [<u style="user-select: auto;"><strong style="user-select: auto;">5,4,6</strong></u>] has a total strength of min([5,4,6]) * sum([5,4,6]) = 4 * 15 = 60
The sum of all the total strengths is 25 + 16 + 36 + 36 + 40 + 60 = 213.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= strength.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= strength[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>