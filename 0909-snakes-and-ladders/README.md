<h2><a href="https://leetcode.com/problems/snakes-and-ladders/">909. Snakes and Ladders</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">n x n</code> integer matrix <code style="user-select: auto;">board</code> where the cells are labeled from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n<sup style="user-select: auto;">2</sup></code> in a <a href="https://en.wikipedia.org/wiki/Boustrophedon" target="_blank" style="user-select: auto;"><strong style="user-select: auto;">Boustrophedon style</strong></a> starting from the bottom left of the board (i.e. <code style="user-select: auto;">board[n - 1][0]</code>) and alternating direction each row.</p>

<p style="user-select: auto;">You start on square <code style="user-select: auto;">1</code> of the board. In each move, starting from square <code style="user-select: auto;">curr</code>, do the following:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Choose a destination square <code style="user-select: auto;">next</code> with a label in the range <code style="user-select: auto;">[curr + 1, min(curr + 6, n<sup style="user-select: auto;">2</sup>)]</code>.

	<ul style="user-select: auto;">
		<li style="user-select: auto;">This choice simulates the result of a standard <strong style="user-select: auto;">6-sided die roll</strong>: i.e., there are always at most 6 destinations, regardless of the size of the board.</li>
	</ul>
	</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">next</code> has a snake or ladder, you <strong style="user-select: auto;">must</strong> move to the destination of that snake or ladder. Otherwise, you move to <code style="user-select: auto;">next</code>.</li>
	<li style="user-select: auto;">The game ends when you reach the square <code style="user-select: auto;">n<sup style="user-select: auto;">2</sup></code>.</li>
</ul>

<p style="user-select: auto;">A board square on row <code style="user-select: auto;">r</code> and column <code style="user-select: auto;">c</code> has a snake or ladder if <code style="user-select: auto;">board[r][c] != -1</code>. The destination of that snake or ladder is <code style="user-select: auto;">board[r][c]</code>. Squares <code style="user-select: auto;">1</code> and <code style="user-select: auto;">n<sup style="user-select: auto;">2</sup></code> do not have a snake or ladder.</p>

<p style="user-select: auto;">Note that you only take a snake or ladder at most once per move. If the destination to a snake or ladder is the start of another snake or ladder, you do <strong style="user-select: auto;">not</strong> follow the subsequent&nbsp;snake or ladder.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, suppose the board is <code style="user-select: auto;">[[-1,4],[-1,3]]</code>, and on the first move, your destination square is <code style="user-select: auto;">2</code>. You follow the ladder to square <code style="user-select: auto;">3</code>, but do <strong style="user-select: auto;">not</strong> follow the subsequent ladder to <code style="user-select: auto;">4</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the least number of moves required to reach the square </em><code style="user-select: auto;">n<sup style="user-select: auto;">2</sup></code><em style="user-select: auto;">. If it is not possible to reach the square, return </em><code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/09/23/snakes.png" style="width: 500px; height: 394px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> board = [[-1,-1,-1,-1,-1,-1],[-1,-1,-1,-1,-1,-1],[-1,-1,-1,-1,-1,-1],[-1,35,-1,-1,13,-1],[-1,-1,-1,-1,-1,-1],[-1,15,-1,-1,-1,-1]]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> 
In the beginning, you start at square 1 (at row 5, column 0).
You decide to move to square 2 and must take the ladder to square 15.
You then decide to move to square 17 and must take the snake to square 13.
You then decide to move to square 14 and must take the ladder to square 35.
You then decide to move to square 36, ending the game.
This is the lowest possible number of moves to reach the last square, so return 4.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> board = [[-1,-1],[-1,3]]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == board.length == board[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is either <code style="user-select: auto;">-1</code> or in the range <code style="user-select: auto;">[1, n<sup style="user-select: auto;">2</sup>]</code>.</li>
	<li style="user-select: auto;">The squares labeled <code style="user-select: auto;">1</code> and <code style="user-select: auto;">n<sup style="user-select: auto;">2</sup></code> do not have any ladders or snakes.</li>
</ul>
</div>