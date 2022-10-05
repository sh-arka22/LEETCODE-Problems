<h2><a href="https://leetcode.com/problems/avoid-flood-in-the-city/">1488. Avoid Flood in The City</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Your country has an infinite number of lakes. Initially, all the lakes are empty, but when it rains over the <code style="user-select: auto;">nth</code> lake, the <code style="user-select: auto;">nth</code> lake becomes full of water. If it rains over a lake that is <strong style="user-select: auto;">full of water</strong>, there will be a <strong style="user-select: auto;">flood</strong>. Your goal is to avoid floods in any lake.</p>

<p style="user-select: auto;">Given an integer array <code style="user-select: auto;">rains</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">rains[i] &gt; 0</code> means there will be rains over the <code style="user-select: auto;">rains[i]</code> lake.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">rains[i] == 0</code> means there are no rains this day and you can choose <strong style="user-select: auto;">one lake</strong> this day and <strong style="user-select: auto;">dry it</strong>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array <code style="user-select: auto;">ans</code></em> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">ans.length == rains.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">ans[i] == -1</code> if <code style="user-select: auto;">rains[i] &gt; 0</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">ans[i]</code> is the lake you choose to dry in the <code style="user-select: auto;">ith</code> day if <code style="user-select: auto;">rains[i] == 0</code>.</li>
</ul>

<p style="user-select: auto;">If there are multiple valid answers return <strong style="user-select: auto;">any</strong> of them. If it is impossible to avoid flood return <strong style="user-select: auto;">an empty array</strong>.</p>

<p style="user-select: auto;">Notice that if you chose to dry a full lake, it becomes empty, but if you chose to dry an empty lake, nothing changes.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> rains = [1,2,3,4]
<strong style="user-select: auto;">Output:</strong> [-1,-1,-1,-1]
<strong style="user-select: auto;">Explanation:</strong> After the first day full lakes are [1]
After the second day full lakes are [1,2]
After the third day full lakes are [1,2,3]
After the fourth day full lakes are [1,2,3,4]
There's no day to dry any lake and there is no flood in any lake.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> rains = [1,2,0,0,2,1]
<strong style="user-select: auto;">Output:</strong> [-1,-1,2,1,-1,-1]
<strong style="user-select: auto;">Explanation:</strong> After the first day full lakes are [1]
After the second day full lakes are [1,2]
After the third day, we dry lake 2. Full lakes are [1]
After the fourth day, we dry lake 1. There is no full lakes.
After the fifth day, full lakes are [2].
After the sixth day, full lakes are [1,2].
It is easy that this scenario is flood-free. [-1,-1,1,2,-1,-1] is another acceptable scenario.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> rains = [1,2,0,1,2]
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> After the second day, full lakes are  [1,2]. We have to dry one lake in the third day.
After that, it will rain over lakes [1,2]. It's easy to prove that no matter which lake you choose to dry in the 3rd day, the other one will flood.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= rains.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= rains[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>