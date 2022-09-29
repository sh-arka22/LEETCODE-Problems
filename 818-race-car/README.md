<h2><a href="https://leetcode.com/problems/race-car/">818. Race Car</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Your car starts at position <code style="user-select: auto;">0</code> and speed <code style="user-select: auto;">+1</code> on an infinite number line. Your car can go into negative positions. Your car drives automatically according to a sequence of instructions <code style="user-select: auto;">'A'</code> (accelerate) and <code style="user-select: auto;">'R'</code> (reverse):</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">When you get an instruction <code style="user-select: auto;">'A'</code>, your car does the following:

	<ul style="user-select: auto;">
		<li style="user-select: auto;"><code style="user-select: auto;">position += speed</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">speed *= 2</code></li>
	</ul>
	</li>
	<li style="user-select: auto;">When you get an instruction <code style="user-select: auto;">'R'</code>, your car does the following:
	<ul style="user-select: auto;">
		<li style="user-select: auto;">If your speed is positive then <code style="user-select: auto;">speed = -1</code></li>
		<li style="user-select: auto;">otherwise <code style="user-select: auto;">speed = 1</code></li>
	</ul>
	Your position stays the same.</li>
</ul>

<p style="user-select: auto;">For example, after commands <code style="user-select: auto;">"AAR"</code>, your car goes to positions <code style="user-select: auto;">0 --&gt; 1 --&gt; 3 --&gt; 3</code>, and your speed goes to <code style="user-select: auto;">1 --&gt; 2 --&gt; 4 --&gt; -1</code>.</p>

<p style="user-select: auto;">Given a target position <code style="user-select: auto;">target</code>, return <em style="user-select: auto;">the length of the shortest sequence of instructions to get there</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = 3
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> 
The shortest instruction sequence is "AA".
Your position goes from 0 --&gt; 1 --&gt; 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = 6
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> 
The shortest instruction sequence is "AAARA".
Your position goes from 0 --&gt; 1 --&gt; 3 --&gt; 7 --&gt; 7 --&gt; 6.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>