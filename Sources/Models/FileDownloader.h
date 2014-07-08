//
//  FileDownloader.h
//  BabyNes
//
//  Created by 倪 李俊 on 14-7-4.
//  Copyright (c) 2014年 Yonsm. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import "LSNetAPIWorker.h"

@interface FileDownloader : NSObject
< NSURLConnectionDelegate
//, NSURLConnectionDownloadDelegate
, NSURLConnectionDataDelegate>
{
    NSMutableData * the_data;
    NSString * the_cache_path;
}
@property (strong,atomic) NSURLConnection* connection;
+(void)ariseNewDownloadTaskForURL:(NSString *)URL withAccessToken:(NSString *)AT;
- (BOOL)doAsyncDownloadByURL:(NSString *)URL withParameterString:(NSString*)parameterString toDelegate:delegate;

@end