<h2><a href="https://leetcode.com/problems/rabbits-in-forest/">781. Rabbits in Forest</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a forest with an unknown number of rabbits. We asked n rabbits <strong style="user-select: auto;">"How many rabbits have the same color as you?"</strong> and collected the answers in an integer array <code style="user-select: auto;">answers</code> where <code style="user-select: auto;">answers[i]</code> is the answer of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> rabbit.</p>

<p style="user-select: auto;">Given the array <code style="user-select: auto;">answers</code>, return <em style="user-select: auto;">the minimum number of rabbits that could be in the forest</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> answers = [1,1,2]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong>
The two rabbits that answered "1" could both be the same color, say red.
The rabbit that answered "2" can't be red or the answers would be inconsistent.
Say the rabbit that answered "2" was blue.
Then there should be 2 other blue rabbits in the forest that didn't answer into the array.
The smallest possible number of rabbits in the forest is therefore 5: 3 that answered plus 2 that didn't.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> answers = [10,10,10]
<strong style="user-select: auto;">Output:</strong> 11
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= answers.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= answers[i] &lt; 1000</code></li>
</ul>
</div>