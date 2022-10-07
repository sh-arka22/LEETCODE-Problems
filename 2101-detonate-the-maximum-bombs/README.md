<h2><a href="https://leetcode.com/problems/detonate-the-maximum-bombs/">2101. Detonate the Maximum Bombs</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a list of bombs. The <strong style="user-select: auto;">range</strong> of a bomb is defined as the area where its effect can be felt. This area is in the shape of a <strong style="user-select: auto;">circle</strong> with the center as the location of the bomb.</p>

<p style="user-select: auto;">The bombs are represented by a <strong style="user-select: auto;">0-indexed</strong> 2D integer array <code style="user-select: auto;">bombs</code> where <code style="user-select: auto;">bombs[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>, r<sub style="user-select: auto;">i</sub>]</code>. <code style="user-select: auto;">x<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">y<sub style="user-select: auto;">i</sub></code> denote the X-coordinate and Y-coordinate of the location of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> bomb, whereas <code style="user-select: auto;">r<sub style="user-select: auto;">i</sub></code> denotes the <strong style="user-select: auto;">radius</strong> of its range.</p>

<p style="user-select: auto;">You may choose to detonate a <strong style="user-select: auto;">single</strong> bomb. When a bomb is detonated, it will detonate <strong style="user-select: auto;">all bombs</strong> that lie in its range. These bombs will further detonate the bombs that lie in their ranges.</p>

<p style="user-select: auto;">Given the list of <code style="user-select: auto;">bombs</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of bombs that can be detonated if you are allowed to detonate <strong style="user-select: auto;">only one</strong> bomb</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/06/desmos-eg-3.png" style="width: 300px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> bombs = [[2,1,3],[6,1,4]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
The above figure shows the positions and ranges of the 2 bombs.
If we detonate the left bomb, the right bomb will not be affected.
But if we detonate the right bomb, both bombs will be detonated.
So the maximum bombs that can be detonated is max(1, 2) = 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/06/desmos-eg-2.png" style="width: 300px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> bombs = [[1,1,5],[10,10,5]]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:
</strong>Detonating either bomb will not detonate the other bomb, so the maximum number of bombs that can be detonated is 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/07/desmos-eg1.png" style="width: 300px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> bombs = [[1,2,3],[2,3,1],[3,4,2],[4,5,3],[5,6,4]]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong>
The best bomb to detonate is bomb 0 because:
- Bomb 0 detonates bombs 1 and 2. The red circle denotes the range of bomb 0.
- Bomb 2 detonates bomb 3. The blue circle denotes the range of bomb 2.
- Bomb 3 detonates bomb 4. The green circle denotes the range of bomb 3.
Thus all 5 bombs are detonated.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= bombs.length&nbsp;&lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">bombs[i].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>, r<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>