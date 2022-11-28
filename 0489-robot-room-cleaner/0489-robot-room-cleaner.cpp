/**
 * // This is the robot's control interface.
 * // You should not implement it, or speculate about its implementation
 * class Robot {
 *   public:
 *     // Returns true if the cell in front is open and robot moves into the cell.
 *     // Returns false if the cell in front is blocked and robot stays in the current cell.
 *     bool move();
 *
 *     // Robot will stay in the same cell after calling turnLeft/turnRight.
 *     // Each turn will be 90 degrees.
 *     void turnLeft();
 *     void turnRight();
 *
 *     // Clean the current cell.
 *     void clean();
 * };
 */

class Solution {
private:
    int directions[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    set<string>vis;
    void moveBack(Robot& robot){
        robot.turnLeft();
        robot.turnLeft();
        robot.move();
        robot.turnRight();
        robot.turnRight();
    }
    void clean(Robot& robot, int row, int col, int currDirection){
        robot.clean();
        vis.insert(to_string(row) + "|" + to_string(col));
        for(int i = 0; i <= 3; i++){
            int nDir = (currDirection+i)%4;
            int nRow = directions[nDir][0] + row;
            int nCol = directions[nDir][1] + col;
            if(vis.count(to_string(nRow) + "|" + to_string(nCol)) == 0 and robot.move())
                clean(robot, nRow, nCol, nDir);
            robot.turnRight();
        }
        moveBack(robot);
    }
public:
    void cleanRoom(Robot& robot) {
        clean(robot, 0, 0, 0);
    }
};