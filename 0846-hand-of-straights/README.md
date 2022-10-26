<h2><a href="https://leetcode.com/problems/hand-of-straights/">846. Hand of Straights</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size <code style="user-select: auto;">groupSize</code>, and consists of <code style="user-select: auto;">groupSize</code> consecutive cards.</p>

<p style="user-select: auto;">Given an integer array <code style="user-select: auto;">hand</code> where <code style="user-select: auto;">hand[i]</code> is the value written on the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> card and an integer <code style="user-select: auto;">groupSize</code>, return <code style="user-select: auto;">true</code> if she can rearrange the cards, or <code style="user-select: auto;">false</code> otherwise.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> hand = [1,2,3,6,2,3,4,7,8], groupSize = 3
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Alice's hand can be rearranged as [1,2,3],[2,3,4],[6,7,8]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> hand = [1,2,3,4,5], groupSize = 4
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> Alice's hand can not be rearranged into groups of 4.

</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= hand.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= hand[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= groupSize &lt;= hand.length</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> This question is the same as 1296: <a href="https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/" target="_blank" style="user-select: auto;">https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/</a></p>
</div>