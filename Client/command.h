/***************************************************************************
  *FileName: command
  *Author: myp
  *Date: 2022/11/5
  *Description: COMMAND
****************************************************************************/

#ifndef COMMAND_H
#define COMMAND_H

#define BUFFER_SIZE 1024

// 消息类型
#define CONNECT 110         // 客户端尝试连接
#define CONNECT_SUCCESS 120 // 服务器返回连接成功
#define CONNECTIONS 130     // 返回实时连接人数
#define SETPIECE 140        // 落子请求

#define UNDO 150            // 悔棋
#define UNDO_REQUEST 151    // 请求悔棋  二级
#define UNDO_YES 152        // 同意悔棋
#define UNDO_NO 153         // 拒绝悔棋

#define GAMEOVER 160        // 游戏结束
#define DISCONNECT 170      //客户端断开连接
#define MESSAGE 180         //局内消息
#define SURRENDER 190       //投降

#define TIE 200             //求和
#define TIE_REQUEST 201     //求和请求
#define TIE_YES 202         //同意
#define TIE_NO 203          //拒绝

#define NUM_OF_MSGTYPE 5

// 棋盘数据
#define BOARD_COL  15        // 棋盘列数
#define BOARD_ROW  15        // 棋盘行数
#define BLACK_PIECE  0       // 棋子标志：黑子
#define WHITE_PIECE  1       // 棋子标志：白子
#define NO_PIECE  2          // 棋子标志：无子
#define BLACK_PLAYER  0      // 棋手标志：黑方
#define WHITE_PLAYER  1      // 棋手标志：白方
#define DRAW 2               // 和棋标志
#define HUMUN_MODE 1         // 悔棋步数：人类 1 步
#define AI_MODE 2            // 悔棋步数：AI 2 步

// 联机服务器
// HOST 填入服务器 IP 地址
#define HOST "43.143.49.135"
#define PORT 7654

#endif // COMMAND_H
