//
//  XTWbClient.h
//  kdweibo
//
//  Created by bird on 14-10-15.
//  Copyright (c) 2014年 www.kingdee.com. All rights reserved.
//

#import "BOSConnect.h"


#define WB_DOC_ForwarDoc          @"docrest/doc/user/forwardoc"
#define WB_FILE_UploadFile        @"docrest/doc/file/uploadfile"
#define WB_FILE_SaveCloudDisk      @"docrest/doc/user/saveCloudDisk"

@interface XTWbClient : BOSConnect
- (void)stowFile:(NSString *)fileId;
- (void)getFileListAtIndex:(NSInteger)index pageSize:(NSInteger)size type:(NSString *)type networkId:(NSString *)networkId isFromSharePlay:(BOOL)isFromSharePlay  fileQueryType:(NSInteger)fileQueryType;
- (void)getMyFileAtIndex:(NSInteger)index pageSize:(NSInteger)size networkId:(NSString *)networkId docBox:(NSString *)docBox  isFromSharePlay:(BOOL)isFromSharePlay  fileQueryType:(NSInteger)fileQueryType;
//文件预览、下载、转发埋点 （针对消息里面的文件）
- (void)markDocMessageWithFileId:(NSString *)fileId
                          userId:(NSString *)userId
                       messageId:(NSString *)messageId
                       networkId:(NSString *)networkId
                        threadId:(NSString *)threadId;
//查询消息群组中该文件的查看次数和查看人列表
- (void)findDetailInfoWithFileId:(NSString *)fileId
                       networkId:(NSString *)networkId
                        threadId:(NSString *)threadId
                       messageId:(NSString *)messageId
                       pageIndex:(NSInteger)pageIndex
                        pageSize:(NSInteger)pageSize
                            desc:(BOOL)desc
                     dedicatorId:(NSString *)dedicatorId;

//查询 消息群组中某用户所有上传文件列表
- (void)showAllUploadFileWithNetworkId:(NSString *)networkId
                              threadId:(NSString *)threadId
                           dedicatorId:(NSString *)dedicatorId
                             pageIndex:(NSInteger)pageIndex
                              pageSize:(NSInteger)pageSize
;

//查询 消息群组中该文件的查看人员名单
- (void)showAllReadUsersWithFileId:(NSString *)fileId
                         networkId:(NSString *)networkId
                          threadId:(NSString *)threadId
                         pageIndex:(NSInteger)pageIndex
                          pageSize:(NSInteger)pageSize
                              desc:(NSString *)desc
                         messageId:(NSString *)messageId;

//消息里面跳转的文件界面借口
- (void)queryListMessageFileWithNetWorkId:(NSString *)networkId
                                 threadId:(NSString *)threadId
                                pageIndex:(NSInteger)pageIndex
                                 pageSize:(NSInteger)pageSize
                                  qryType:(NSInteger)type
                                     desc:(BOOL)desc;

- (void)uploadFileWithNetworkId:(NSString *)networkId userId:(NSString *)userId file:(NSData *)file;
- (void)uploadFileWithNetworkId:(NSString *)networkId userId:(NSString *)userId files:(NSArray *)files;
// 可传[文件名: 二进制数据]
- (void)uploadFileWithNetworkId:(NSString *)networkId userId:(NSString *)userId fileDict:(NSDictionary *)fileDict; // fileDict: [NSString: NSData]


- (void)querySevendayFileWithNetWorkId:(NSString *)networkId
                              threadId:(NSString *)threadId
                                  desc:(BOOL)desc;

- (void)makeDocWhenDownloadDocWithFileId:(NSString *)fileId
                               networkId:(NSString *)networkId
                                threadId:(NSString *)threadId
                               messageId:(NSString *)messageId;

- (void)checkSevenDayNotReadCountWithNetworkId:(NSString *)networkId
                                      ThreadId:(NSString *)threadId
                                          Desc:(BOOL)desc;
//存储到企业云盘
- (void)saveClockDiskWithFileId:(NSString *)fileId typeStr:(NSString *)typeStr;

/// 获取对外文件获得下载地址
- (void)getFileDownloadURL:(NSArray *)fileIds type:(NSString *)type;

//文件选择获取文件列表
- (void)getFileListAtOffset:(NSInteger)offset limit:(NSInteger)limit type:(NSInteger)type pFolderId:(NSString *)pFolderId;

@end
