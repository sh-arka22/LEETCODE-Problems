<h2><a href="https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/">1760. Minimum Limit of Balls in a Bag</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> where the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> bag contains <code style="user-select: auto;">nums[i]</code> balls. You are also given an integer <code style="user-select: auto;">maxOperations</code>.</p>

<p style="user-select: auto;">You can perform the following operation at most <code style="user-select: auto;">maxOperations</code> times:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Take any bag of balls and divide it into two new bags with a <strong style="user-select: auto;">positive </strong>number of balls.

	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, a bag of <code style="user-select: auto;">5</code> balls can become two new bags of <code style="user-select: auto;">1</code> and <code style="user-select: auto;">4</code> balls, or two new bags of <code style="user-select: auto;">2</code> and <code style="user-select: auto;">3</code> balls.</li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">Your penalty is the <strong style="user-select: auto;">maximum</strong> number of balls in a bag. You want to <strong style="user-select: auto;">minimize</strong> your penalty after the operations.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum possible penalty&nbsp;after performing the operations</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [9], maxOperations = 2
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> 
- Divide the bag with 9 balls into two bags of sizes 6 and 3. [<strong style="user-select: auto;"><u style="user-select: auto;">9</u></strong>] -&gt; [6,3].
- Divide the bag with 6 balls into two bags of sizes 3 and 3. [<strong style="user-select: auto;"><u style="user-select: auto;">6</u></strong>,3] -&gt; [3,3,3].
The bag with the most number of balls has 3 balls, so your penalty is 3 and you should return 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,4,8,2], maxOperations = 4
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
- Divide the bag with 8 balls into two bags of sizes 4 and 4. [2,4,<strong style="user-select: auto;"><u style="user-select: auto;">8</u></strong>,2] -&gt; [2,4,4,4,2].
- Divide the bag with 4 balls into two bags of sizes 2 and 2. [2,<strong style="user-select: auto;"><u style="user-select: auto;">4</u></strong>,4,4,2] -&gt; [2,2,2,4,4,2].
- Divide the bag with 4 balls into two bags of sizes 2 and 2. [2,2,2,<strong style="user-select: auto;"><u style="user-select: auto;">4</u></strong>,4,2] -&gt; [2,2,2,2,2,4,2].
- Divide the bag with 4 balls into two bags of sizes 2 and 2. [2,2,2,2,2,<strong style="user-select: auto;"><u style="user-select: auto;">4</u></strong>,2] -&gt; [2,2,2,2,2,2,2,2].
The bag with the most number of balls has 2 balls, so your penalty is 2 an you should return 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [7,17], maxOperations = 2
<strong style="user-select: auto;">Output:</strong> 7
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= maxOperations, nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>